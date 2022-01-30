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

struct Node {
  int p, l, r;
};

struct Node T[1000000];

void parse(int u) {
  if (u == -1) return;
  // printf("!! %d %d %d %d\n", u, T[u].p, T[u].l, T[u].r);
  parse(T[u].l);
  cout << u << " ";
  parse(T[u].r);
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  rep(i, 0, n + 1) {
    T[i].p = -1;
    T[i].l = -1;
    T[i].r = -1;
  }

  rep(i, 1, n + 1) {
    char lr = s[i - 1];
    if (lr == 'L') {
      T[i].p = i - 1;
      T[i - 1].l = i;
    } else {
      T[i].p = i - 1;
      T[i - 1].r = i;
    }
  }

  // if (s[0] == 'R') cout << 0 << "";
  parse(0);
  // if (s[0] == 'L') cout << 0 << "";
  cout << endl;
  return 0;
}
