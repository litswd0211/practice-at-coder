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
typedef pair<double, double> pdd;

double dst(pdd &x, pdd &y) {
  return sqrt(pow(x.first - y.first, 2) + pow(x.second - y.second, 2));
}

int main() {
  int n;
  cin >> n;

  vector<pdd> p(n);
  rep(i, 0, n) cin >> p[i].first >> p[i].second;

  double ans = 0;
  rep(i, 0, n) {
    rep(j, 0, n) {
      double d = dst(p[i], p[j]);
      ans = max(ans, d);
    }
  }

  printf("%.7f\n", ans);
  return 0;
}