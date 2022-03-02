#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n, X;
  cin >> n >> X;
  vector<int> a(n), b(n);
  rep(i, 0, n) cin >> a[i] >> b[i];

  vector<vector<bool>> dp(n + 1, vector<bool>(X + 101, false));
  dp[0][0] = true;

  rep(i, 0, n) {
    rep(x, 0, X + 1) {
      if (dp[i][x]) {
        dp[i + 1][x + a[i]] = true;
        dp[i + 1][x + b[i]] = true;
      }
    }
  }

  if (dp[n][X])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}