#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int N;
double P[3030];
double dp[3030][3030];

int main() {
  cin >> N;

  // double P[N];
  rep(i, 0, N) cin >> P[i];

  // double dp[N + 1][N + 1];
  dp[0][0] = 1;

  rep(i, 0, N) {
    rep(j, 0, N + 1) {
      dp[i + 1][j] += dp[i][j] * (1 - P[i]);
      dp[i + 1][j + 1] += dp[i][j] * P[i];
    }
  }

  double ans = 0;
  rep(j, N / 2 + 1, N + 1) ans += dp[N][j];
  printf("%.10f\n", ans);

  return 0;
}
