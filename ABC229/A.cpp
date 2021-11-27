#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  vector<string> s(4);
  string s1, s2;
  cin >> s1;
  cin >> s2;
  s[0] = "....";
  s[1] = "." + s1 + ".";
  s[2] = "." + s2 + ".";
  s[3] = "....";

  bool ans = true;
  rep(i, 1, 3) rep(j, 1, 3) {
    if (s[i][j] == '#' && s[i][j - 1] != '#' && s[i][j + 1] != '#' &&
        s[i - 1][j] != '#' && s[i + 1][j] != '#') {
      ans = false;
      break;
    }
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
