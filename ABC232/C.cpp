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
  int n, m;
  cin >> n >> m;

  vector ga(n, vector<int>(n, 0));
  vector gb(n, vector<int>(n, 0));
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    ga[a][b] = 1;
    ga[b][a] = 1;
  }
  rep(i, 0, m) {
    int c, d;
    cin >> c >> d;
    --c;
    --d;
    gb[c][d] = 1;
    gb[d][c] = 1;
  }

  vector<int> p(n);
  rep(i, 0, n) p[i] = i;

  do {
    vector g(n, vector<int>(n));
    rep(i, 0, n) rep(j, 0, n) { g[i][j] = ga[p[i]][p[j]]; }
    if (g == gb) {
      cout << "Yes" << endl;
      return 0;
    }

  } while (next_permutation(p.begin(), p.end()));

  cout << "No" << endl;
  return 0;
}
