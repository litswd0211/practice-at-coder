#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n = 1048576;
  vector<ll> a(n, -1);

  int q;
  cin >> q;
  set<int> s;
  rep(i, 0, n) s.insert(i);

  rep(i, 0, q) {
    int t;
    ll x;
    cin >> t >> x;
    if (t == 1) {
      int h = x % n;
      auto it = s.lower_bound(h);
      if (it == s.end()) it = s.begin();
      a[*it] = x;
      s.erase(it);
    } else if (t == 2) {
      // printf("%d\n", a[x % n]);
      cout << a[x % n] << endl;
    }
  }

  return 0;
}