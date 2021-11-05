#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int N, M;
vector<int> G[100001];
int dp[100001];

int solve(int i) {
  if (dp[i]) return dp[i];

  rep(j, 0, G[i].size()) {
    int to = G[i][j];
    dp[i] = max(dp[i], solve(to) + 1);
  }

  return dp[i];
}

int main() {
  cin >> N >> M;

  rep(i, 0, M) {
    int x, y;
    cin >> x >> y;
    G[x].push_back(y);
  }

  rep(i, 1, N + 1) { solve(i); }

  int ans = 0;
  rep(i, 1, N + 1) { ans = max(ans, dp[i]); }
  cout << ans << endl;

  return 0;
}