#include <iostream>
using namespace std;

const int MOD = 100000007;

int main() {
    int T;
    cin >> T;

    for (int caseno = 1; caseno <= T; caseno++) {
        int n, K;
        cin >> n >> K;

        int A[55], C[55];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> C[i];
        }

        int dp[1005] = {0};
        dp[0] = 1;

        for (int i = 0; i < n; i++) {
            int newDp[1005] = {0};

            for (int sum = 0; sum <= K; sum++) {
                if (dp[sum] != 0) {
                    for (int cnt = 0; cnt <= C[i]; cnt++) {
                        int newSum = sum + cnt * A[i];

                        if (newSum <= K) {
                            newDp[newSum] = (newDp[newSum] + dp[sum]) % MOD;
                        }
                    }
                }
            }

            for (int sum = 0; sum <= K; sum++) {
                dp[sum] = newDp[sum];
            }
        }

        cout << "Case " << caseno << ": " << dp[K] << endl;
    }

    return 0;
}