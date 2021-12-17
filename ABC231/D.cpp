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
  dsu d(n);
  vector<int> deg(n);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    if (d.same(a, b)) {
      cout << "No" << endl;
      return 0;
    }
    d.merge(a, b);
    deg[a]++;
    deg[b]++;
  }

  rep(i, 0, n) {
    if (deg[i] > 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}