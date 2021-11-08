#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int H, W;
  cin >> H >> W;

  string G[H + 1];
  rep(i, 1, H + 1) {
    string l;
    cin >> l;
    G[i] = "@" + l;
  }

  // int dp[H + 1][W + 1];
  vector<vector<int>> dp(H + 1, vector<int>(W + 1, 0));
  // rep(i, 1, H + 1) dp[i][0] = 0;
  // rep(j, 1, W + 1) dp[0][j] = 0;
  dp[1][1] = 1;

  int MOD = 1000000007;

  rep(i, 1, H + 1) rep(j, 1, W + 1) {
    if (i == 1 && j == 1) continue;
    if (G[i][j] == '#')
      dp[i][j] = 0;
    else {
      dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
    }
  }

  cout << dp[H][W] << endl;

  return 0;
}
