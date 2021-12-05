#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll p, q, r, s;
  cin >> p >> q >> r >> s;

  for (ll i = p; i <= q; i++) {
    for (ll j = r; j <= s; j++) {
      if (i + j == a + b || i - j == a - b)
        cout << "#";
      else
        cout << ".";
    }
    cout << endl;
  }

  return 0;
}
