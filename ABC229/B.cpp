#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int n = min(a.size(), b.size());

  bool ans = false;

  rep(i, 0, n) {
    int ai = int(a[i] - '0');
    int bi = int(b[i] - '0');
    // printf("%d %d\n", ai, bi);
    if (ai + bi > 9) {
      // printf("hard");
      ans = true;
      break;
    }
  }

  if (ans)
    cout << "Hard" << endl;
  else
    cout << "Easy" << endl;

  return 0;
}