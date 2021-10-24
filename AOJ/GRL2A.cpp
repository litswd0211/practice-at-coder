#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(n) for (int i = 0; i < (int)n; i++)
#define repi(i, a, b) for (int i = (int)a; i < (int)b; i++)
using namespace std;
using namespace atcoder;
typedef long long ll;
const int INF = 1e9;

struct Edge {
  int s, t, w;
  bool operator<(const Edge &e) const { return w < e.w; }
};

int kruskal(int v, vector<Edge> edges) {
  int totalCost = 0;
  sort(edges.begin(), edges.end());
  dsu d(v + 1);

  for (Edge e : edges) {
    if (!d.same(e.s, e.t)) {
      totalCost += e.w;
      d.merge(e.s, e.t);
    }
  }

  return totalCost;
}

int main() {
  int v, e;
  cin >> v >> e;

  vector<Edge> edges;
  rep(i, e) {
    int s, t, w;
    cin >> s >> t >> w;
    edges.push_back(Edge{s, t, w});
  }

  cout << kruskal(v, edges) << endl;

  return 0;
}