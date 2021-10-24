#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(n) for (int i = 0; i < (int)n; i++)
#define repi(i, a, b) for (int i = (int)a; i < (int)b; i++)
using namespace std;
typedef long long ll;

int main() {
  int m;
  cin >> m;
  int n = 9;
  vector<vector<int>> G(n);

  int u, v;
  rep(i, m) {
    cin >> u >> v;
    u--;
    v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  vector<int> s(n, -1);
  vector<int> g(n, -1);
  rep(i, n - 1) {
    int p;
    cin >> p;
    p--;
    s[p] = i;
  }
  rep(i, n - 1) g[i] = i;

  map<vector<int>, int> dist;
  queue<vector<int>> q;
  dist[s] = 0;
  q.push(s);

  while (!q.empty()) {
    vector<int> c = q.front();
    q.pop();
    int d = dist[c];
    rep(v, n) if (c[v] == -1) {
      for (int u : G[v]) {
        vector<int> nc = c;
        swap(nc[u], nc[v]);
        if (dist.find(nc) == dist.end()) {
          dist[nc] = d + 1;
          q.push(nc);
        }
      }
    }
  }

  // printf("dist\n");
  // for (auto t : dist) {
  //  rep(i, t.first.size()) { cout << t.first[i] << ","; }
  //  cout << endl;
  //}
  //
  // printf("s\n");
  // rep(i, s.size()) { cout << s[i] << ","; }
  // cout << endl;
  // printf("g\n");
  // rep(i, g.size()) { cout << g[i] << ","; }
  // cout << endl;

  if (dist.find(g) == dist.end())
    cout << -1 << endl;
  else
    cout << dist[g] << endl;

  return 0;
}