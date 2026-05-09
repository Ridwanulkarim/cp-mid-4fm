#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, x;
    cin >> n >> x;

    int coin[105];

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    long long dp[1000001];

    for (int i = 0; i <= x; i++) {
        dp[i] = 0;
    }

    dp[0] = 1;

    for (int sum = 1; sum <= x; sum++) {
        for (int i = 0; i < n; i++) {
            if (sum - coin[i] >= 0) {
                dp[sum] = (dp[sum] + dp[sum - coin[i]]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;

    return 0;
}