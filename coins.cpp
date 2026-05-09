#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double p[3005];

    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    double dp[3005];

    for (int i = 0; i <= N; i++) {
        dp[i] = 0.0;
    }

    dp[0] = 1.0;

    for (int i = 0; i < N; i++) {
        for (int heads = i; heads >= 0; heads--) {
            dp[heads + 1] += dp[heads] * p[i];
            dp[heads] = dp[heads] * (1.0 - p[i]);
        }
    }

    double ans = 0.0;

    for (int heads = (N / 2) + 1; heads <= N; heads++) {
        ans += dp[heads];
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}