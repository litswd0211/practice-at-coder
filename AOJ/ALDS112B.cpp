#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

static const int MAX = 100;
static const int INFTY = 1 << 21;

int n, M[MAX][MAX];

void dijkstra() {
  int minv;
  int d[MAX], color[MAX];

  rep(i, n) {
    d[i] = INFTY;
    color[i] = 0;
  }

  d[0] = 0;

  while (1) {
    minv = INFTY;
    int u = -1;
    rep(i, n) {
      if (color[i] == 0 && d[i] < minv) {
        u = i;
        minv = d[i];
      }
    }

    if (u == -1) break;

    color[u] = 1;
    rep(v, n) {
      if (color[v] == 0 && M[u][v] != INFTY) {
        d[v] = min(d[v], d[u] + M[u][v]);
      }
    }
  }

  rep(i, n) { cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl; }
}

int main() {
  cin >> n;
  rep(i, n) {
    rep(j, n) { M[i][j] = INFTY; }
  }

  int k, c, u, v;
  rep(i, n) {
    cin >> u >> k;
    rep(j, k) {
      cin >> v >> c;
      M[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}
