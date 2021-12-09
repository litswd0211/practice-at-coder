#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  ll n;
  cin >> n;
  ll sum = 0;
  // rep(i, 1, n + 1) { sum += n / i; }
  ll i = 1;
  while (i <= n) {
    ll x = n / i;
    ll ni = n / x + 1;
    sum += x * (ni - i);
    i = ni;
  }

  cout << sum << endl;

  return 0;
}
