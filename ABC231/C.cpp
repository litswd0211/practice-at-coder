#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n);
  rep(i, 0, n) cin >> a[i];
  sort(a.begin(), a.end());

  rep(i, 0, q) {
    ll x;
    cin >> x;

    auto lower = lower_bound(a.begin(), a.end(), x);
    ll idx = distance(a.begin(), lower);
    cout << a.size() - idx << endl;
  }

  return 0;
}