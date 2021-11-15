#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n, k;
  cin >> n >> k;

  vector<ll> a(n);
  rep(i, 0, n) cin >> a[i];

  ll ok = 0, ng = 1e18 / k;

  while (ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    ll sum = 0;
    rep(i, 0, n) sum += min(a[i], mid);
    if (sum >= k * mid)
      ok = mid;
    else
      ng = mid;
  }

  cout << ok << endl;

  return 0;
}