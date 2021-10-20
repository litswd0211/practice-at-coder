#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
const int INF = 1e9;
const int MAX = 10001;
int s[MAX];

int root(int x) {
  if (s[x] == -1) {
    return x;
  } else {
    return root(s[x]);
  }
}

void unite(int x, int y) {
  int xroot = root(x);
  int yroot = root(y);
  if (xroot != yroot) {
    s[yroot] = x;
  }
}

void same(int x, int y) {
  // printf("%d , %d\n", x, y);
  // printf("%d == %d\n", root(x), root(y));

  if (root(x) == root(y)) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  int n, q;
  cin >> n >> q;

  rep(i, n) { s[i] = -1; }

  int com, x, y;
  rep(i, q) {
    cin >> com >> x >> y;
    // printf("%d %d %d\n", com, x, y);
    if (com == 0) {
      unite(x, y);
    } else {
      same(x, y);
    }
  }

  return 0;
}
