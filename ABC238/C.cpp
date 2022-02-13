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
using mint = modint998244353;

mint sum(ll x) { return mint(1 + x) * x / 2; }

int main() {
  ll n;
  cin >> n;

  ll l = 1;
  mint ans;
  while (l <= n) {
    ll r = l * 10;
    ll len = min(n + 1, r) - l;
    ans += sum(len);
    l *= 10;
  }

  cout << ans.val() << endl;

  return 0;
}
