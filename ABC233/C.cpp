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

ll n, x;
vector<vector<ll>> f;

int loop(ll c, int d) {
  int sum = 0;
  fore(a, f[d]) {
    ll ans = c * a;
    if (d == n - 1) {
      if (ans == x) sum++;
      continue;
    }
    if (ans > x) {
      break;
    }
    sum += loop(ans, d + 1);
  }
  return sum;
}

int main() {
  cin >> n >> x;
  f = vector<vector<ll>>(n);

  rep(i, 0, n) {
    int l;
    cin >> l;
    f[i] = vector<ll>(l);
    rep(j, 0, l) cin >> f[i][j];
    sort(f[i].begin(), f[i].end());
  }

  cout << loop(1, 0) << endl;
  return 0;
}
