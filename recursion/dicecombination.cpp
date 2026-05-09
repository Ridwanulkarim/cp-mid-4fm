#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {

    int n;
    cin >> n;

    long long dp[1000001];

    dp[0] = 1;

    for(int i = 1; i <= n; i++) {

        dp[i] = 0;

        for(int dice = 1; dice <= 6; dice++) {

            if(i - dice >= 0) {
                dp[i] = (dp[i] + dp[i - dice]) % MOD;
            }
        }
    }

    cout << dp[n];

    return 0;
}