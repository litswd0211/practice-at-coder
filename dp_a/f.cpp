#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  string s, t;
  cin >> s >> t;

  int slen = s.size();
  int tlen = t.size();
  s = "#" + s;
  t = "#" + t;

  vector<vector<int>> dp(slen + 1, vector<int>(tlen + 1));
  dp[0][0] = 0;

  rep(si, 1, slen + 1) {
    rep(ti, 1, tlen + 1) {
      if (s[si] == t[ti]) {
        dp[si][ti] = dp[si - 1][ti - 1] + 1;
      } else {
        dp[si][ti] = max(dp[si - 1][ti], dp[si][ti - 1]);
      }
      // cout << dp[si - 1][ti - 1] << endl;
    }
  }

  // cout << dp[slen][tlen] << endl;
  string ans = "";
  int si = slen, ti = tlen;
  while (si > 0 && ti > 0) {
    if (s[si] == t[ti]) {
      ans = s[si] + ans;
      si--;
      ti--;
    } else if (dp[si - 1][ti] == dp[si][ti]) {
      si--;
    } else {
      ti--;
    }
  }
  cout << ans << endl;

  return 0;
}
