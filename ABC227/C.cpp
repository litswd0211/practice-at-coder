#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll a = 1; a * a * a <= N; a++) {
    for (ll b = a; b * b <= N / a; b++) {
      for (ll c = b; c <= N / (a * b); c++) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}