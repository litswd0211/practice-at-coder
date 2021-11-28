#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  string s;
  int k;
  cin >> s >> k;

  int n = s.size();
  vector<int> a(n);
  rep(i, 0, n) a[i] = s[i] == '.';

  int sum = 0;
  int r = 0;
  int ans = 0;
  rep(i, 0, n) {
    while (r < n && sum + a[r] <= k) {
      sum += a[r];
      r++;
    }
    sum -= a[i];
    ans = max(ans, r - i);
  }

  cout << ans << endl;

  return 0;
}