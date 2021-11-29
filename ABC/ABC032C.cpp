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
  vector<int> s(n);
  rep(i, 0, n) {
    cin >> s[i];
    if (!s[i]) {
      cout << n << endl;
      return 0;
    }
  }

  int r = 0;
  ll p = 1;
  int ans = 0;
  rep(l, 0, n) {
    while (r < n && p * s[r] <= k) {
      p *= s[r];
      r++;
    }
    ans = max(ans, r - l);
    if (l == r)
      r++;
    else
      p /= s[l];
    // if (s[l]) p /= s[l];
    // printf("%d - %d = %d\n", l, r, r - l);
  }

  cout << ans << endl;

  return 0;
}
