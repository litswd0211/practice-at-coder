#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

struct Pl {
  int a, b, c;
};

int N, dp[100001][3];
Pl P[100001];

int main() {
  cin >> N;

  rep(i, 1, N + 1) cin >> P[i].a >> P[i].b >> P[i].c;

  rep(i, 0, 3) dp[0][i] = 0;

  rep(i, 1, N + 1) {
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + P[i].a;
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + P[i].b;
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + P[i].c;
  }

  int ans = 0;
  ans = dp[N][0];
  ans = max(ans, dp[N][1]);
  ans = max(ans, dp[N][2]);
  cout << ans << endl;

  return 0;
}
