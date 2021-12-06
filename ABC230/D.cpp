#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
using P = pair<int, int>;

// TODO: 区間スケジューリング
int main() {
  int n, d;
  cin >> n >> d;

  vector<P> p(n);
  rep(i, 0, n) cin >> p[i].second >> p[i].first;
  sort(p.begin(), p.end());

  int ans = 0;
  int x = -1;
  for (auto [r, l] : p) {
    if (x < l) {
      ans++;
      x = r + d - 1;
    }
  }

  cout << ans << endl;

  return 0;
}