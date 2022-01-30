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
  string s;
  cin >> s;

  int a, b;
  cin >> a >> b;
  --a;
  --b;

  string sa = {s[a]};
  string sb = {s[b]};

  s.replace(a, 1, sb);
  s.replace(b, 1, sa);

  cout << s << endl;

  return 0;
}