#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const ll INF = (1LL << 32);
const int MAX = 100;

int V, E;
ll G[MAX][MAX];

void floyd() {
  rep(k, V) {
    rep(i, V) {
      rep(j, V) {
        if (G[i][k] == INF || G[k][j] == INF) {
          continue;
        }
        G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
      }
    }
  }
}

int main() {
  scanf("%d %d", &V, &E);

  rep(i, V) {
    rep(j, V) { G[i][j] = (i == j) ? 0 : INF; }
  }

  int s, t, d;
  rep(i, E) {
    scanf("%d %d %d", &s, &t, &d);
    G[s][t] = d;
  }

  floyd();

  rep(i, V) {
    if (G[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  rep(i, V) {
    rep(j, V) {
      if (j > 0) cout << " ";
      if (G[i][j] == INF)
        cout << "INF";
      else
        cout << G[i][j];
    }
    cout << endl;
  }

  return 0;
}
