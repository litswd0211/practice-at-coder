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
  int l, r;
  string s;
  cin >> l >> r;
  cin >> s;

  cout << s.substr(0, l - 1);
  rrep(i, r - 1, l - 1) cout << s[i];
  cout << s.substr(r, s.size() - r);
  cout << endl;
  return 0;
}