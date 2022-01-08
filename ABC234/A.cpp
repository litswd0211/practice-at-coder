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

ll f(ll x) { return x * x + 2 * x + 3; }

int main() {
  ll t;
  cin >> t;

  cout << f(f(f(t) + t) + f(f(t))) << endl;
  return 0;
}
