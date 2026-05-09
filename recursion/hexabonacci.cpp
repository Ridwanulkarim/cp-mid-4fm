#include <iostream>
using namespace std;

const int MOD = 10000007;

int main() {
    int T;
    cin >> T;

    for (int caseno = 1; caseno <= T; caseno++) {
        long long a, b, c, d, e, f;
        int n;

        cin >> a >> b >> c >> d >> e >> f >> n;

        long long dp[10001];

        dp[0] = a % MOD;
        dp[1] = b % MOD;
        dp[2] = c % MOD;
        dp[3] = d % MOD;
        dp[4] = e % MOD;
        dp[5] = f % MOD;

        for (int i = 6; i <= n; i++) {
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6]) % MOD;
        }

        cout << "Case " << caseno << ": " << dp[n] << endl;
    }

    return 0;
}