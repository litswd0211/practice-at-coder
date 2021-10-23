#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
// const int INF = 1e9;
const int INF = (1 << 30);
const int MAX = 100000;

struct Edge {
  int to, w;
};

vector<Edge> G[MAX];
int N, d[MAX];

void bfs(int s) {
  rep(i, N) { d[i] = INF; }

  queue<int> Q;
  Q.push(s);
  d[s] = 0;
  int u;
  while (!Q.empty()) {
    u = Q.front();
    Q.pop();
    rep(i, G[u].size()) {
      Edge e = G[u][i];
      if (d[e.to] == INF) {
        d[e.to] = d[u] + e.w;
        Q.push(e.to);
      }
    }
  }
}

int maxw_of_i() {
  int maxw, maxwi;
  rep(i, N) {
    if (d[i] == INF) continue;
    if (maxw < d[i]) {
      maxw = d[i];
      maxwi = i;
    }
  }
  return maxwi;
}

int main() {
  scanf("%d", &N);

  int s, t, w;
  rep(i, N) {
    scanf("%d %d %d", &s, &t, &w);
    G[s].push_back(Edge{t, w});
    G[t].push_back(Edge{s, w});
  }

  // 最も遠い接点xを求める
  bfs(0);
  int tgt = maxw_of_i();

  // xから最も遠い接点までの距離を求める
  bfs(tgt);
  int maxwi = maxw_of_i();

  cout << d[maxwi] << endl;

  return 0;
}
