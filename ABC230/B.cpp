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
  cin >> s;

  bool ans = true;
  rep(i, 0, s.size()) {
    string t = s.substr(i, 3);
    if (t.size() == 2) {
      if (t == "oo") ans = false;
    } else if (t.size() == 3) {
      if (t != "oxx" && t != "xxo" && t != "xox") ans = false;
    }
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}