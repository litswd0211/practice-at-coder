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

int main() {
  int n;
  cin >> n;

  vector<int> a;
  a.push_back(0);

  rep(i, 0, n) {
    int agl;
    cin >> agl;

    rep(j, 0, a.size()) { a[j] = (a[j] + agl) % 360; }
    a.push_back(0);
  }

  a.push_back(360);
  sort(a.begin(), a.end());

  int ans = 0;
  rep(i, 0, n + 1) {
    // cout << a[i] << endl;
    ans = max(ans, a[i + 1] - a[i]);
  }

  cout << ans << endl;

  return 0;
}