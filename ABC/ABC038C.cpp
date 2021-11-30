#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  ll ans = 0;
  int r = 1;
  rep(l, 0, n) {
    // printf("%d %d <= %d\n", r, a[r], a[r + 1]);
    while (r < n && (r <= l || a[r - 1] < a[r])) {
      r++;
    }
    ans += r - l;
    if (l == r) r++;
  }

  cout << ans << endl;

  return 0;
}