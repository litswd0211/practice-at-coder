#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto& i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

struct cc {
  ll a, b;
  bool operator<(const cc& right) const { return a > right.a; }
};

int main() {
  int n, w;
  cin >> n >> w;

  vector<cc> c(n);
  int a, b;
  rep(i, 0, n) { cin >> c[i].a >> c[i].b; }
  sort(c.begin(), c.end());

  ll o = 0;
  fore(i, c) {
    if (w <= 0) break;
    // printf("%d %d\n", i.a, i.b);
    ll use = (w < i.b) ? w : i.b;
    o += use * i.a;
    w -= use;
    // printf(" %d %d\n", use, o);
  }

  cout << o << endl;

  return 0;
}
