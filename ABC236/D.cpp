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

int n, n2;
vector<vector<int>> a;
int ans;
void dfs(vector<bool> s, int x) {
  int si = -1;
  rep(i, 0, n2) if (!s[i]) {
    si = i;
    break;
  }
  if (si == -1) {
    ans = max(ans, x);
    return;
  }

  s[si] = true;
  rep(sj, 0, n2) if (!s[sj] && si != sj) {
    s[sj] = true;
    dfs(s, x ^ a[si][sj]);
    s[sj] = false;
  }
}

int main() {
  cin >> n;
  n2 = n * 2;

  a = vector<vector<int>>(n2, vector<int>(n2));
  rep(i, 0, n2) rep(j, i + 1, n2) {
    cin >> a[i][j];
    a[j][i] = a[i][j];
  }

  vector<bool> s(n2);
  dfs(s, 0);
  cout << ans << endl;

  return 0;
}