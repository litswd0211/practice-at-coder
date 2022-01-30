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
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  rep(i, 0, n) cin >> s[i];

  map<string, int> mp;
  rep(i, 0, m) {
    string t;
    cin >> t;
    mp[t]++;
  }

  fore(i, s) {
    if (mp[i] > 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}