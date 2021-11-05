#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(n) for (int i = 0; i < (int)n; i++)
#define repi(i, a, b) for (int i = (int)a; i < (int)b; i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;

struct I {
  int v, w;
};

int main() {
  int N, W;
  cin >> N >> W;

  I items[N];
  repi(i, 1, N + 1) cin >> items[i].v >> items[i].w;

  int d[N + 1][W + 1];
  rep(i, N + 1) d[i][0] = 0;
  rep(w, W + 1) d[0][w] = 0;

  repi(i, 1, N + 1) repi(w, 1, W + 1) {
    if (items[i].w <= w) {
      d[i][w] = max(d[i - 1][w], d[i - 1][w - items[i].w] + items[i].v);
    } else {
      d[i][w] = d[i - 1][w];
    }
  }

  cout << d[N][W] << endl;
  // rep(i, N + 1) {
  //  rep(w, W + 1) { cout << d[i][w] << ", "; }
  //  cout << endl;
  //}

  return 0;
}
