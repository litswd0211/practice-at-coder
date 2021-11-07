#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N;
  cin >> N;

  pair<ll, ll> P[N];
  ll x, y;

  rep(i, 0, N) {
    cin >> x >> y;
    P[i] = make_pair(x, y);
  }

  // cout << gcd(-4, -2) << endl;
  // return 0;
  set<pair<ll, ll>> S;

  rep(i, 0, N) rep(j, 0, N) {
    if (i == j) continue;
    pair<ll, ll> p1 = P[i];
    pair<ll, ll> p2 = P[j];
    // pair<ll, ll> dif = make_pair(p1.first - p2.first, p1.second - p2.second);
    ll x = p1.first - p2.first;
    ll y = p1.second - p2.second;
    // printf("bef %d, %d\n", x, y);

    ll d = gcd(x, y);

    if (d > 0) {
      x /= d;
      y /= d;
    }

    S.insert(make_pair(x, y));

    // cout << x << "," << y << endl;
  }

  cout << S.size() << endl;

  return 0;
}
