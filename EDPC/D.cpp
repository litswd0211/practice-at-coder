#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

struct Si {
  int w, v;
};

int N, W;
Si S[101];
ll dp[101][100001];

int main() {
  cin >> N >> W;
  rep(i, 1, N + 1) cin >> S[i].w >> S[i].v;

  rep(w, 0, W + 1) dp[0][w] = 0;

  rep(i, 1, N + 1) rep(w, 0, W + 1) {
    Si s = S[i];

    if (w >= s.w) {
      dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - s.w] + s.v);
    } else {
      dp[i][w] = dp[i - 1][w];
    }
  }

  cout << dp[N][W] << endl;

  return 0;
}
