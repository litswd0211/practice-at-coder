#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int s, t, x;
  cin >> s >> t >> x;

  // if (t == 0) t = 24;
  // if (x == 0) x = 24;
  if (s > t) t += 24;
  if (s > x) x += 24;

  if (x >= s && t > x)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
