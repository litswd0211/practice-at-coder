#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
const int INF = 1e9;
const int MAX = 10000;

int n;
vector<pair<int, int>> adj[MAX];

void dijkstra() {
  priority_queue<pair<int, int>> PQ;
  int color[MAX];
  int d[MAX];

  rep(i, n) {
    d[i] = INF;
    color[i] = 0;
  }

  d[0] = 0;
  PQ.push(make_pair(0, 0));

  while (!PQ.empty()) {
    pair<int, int> f = PQ.top();  // 重さ(重い順), v
    PQ.pop();

    int u = f.second;
    color[u] = 1;

    if (d[u] < f.first * -1) continue;

    rep(j, adj[u].size()) {
      int v = adj[u][j].first;
      if (color[v] != 0) continue;
      if (d[v] > d[u] + adj[u][j].second) {
        d[v] = d[u] + adj[u][j].second;
        PQ.push(make_pair(d[v] * -1, v));
        color[v] = 1;
      }
    }
  }

  rep(i, n) { cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl; }
}

int main() {
  int k, u, v, c;

  cin >> n;
  rep(i, n) {
    cin >> u >> k;
    rep(j, k) {
      cin >> v >> c;
      adj[u].push_back(make_pair(v, c));
    }
  }

  dijkstra();

  return 0;
}
