#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
// const int INF = 1e9;
const int MAX = 10000;

int V, E;
vector<int> G[MAX];
int indeg[MAX];
vector<int> ans;

int main() {
  scanf("%d %d", &V, &E);

  int s, t;
  rep(i, E) {
    scanf("%d %d", &s, &t);
    G[s].push_back(t);
    indeg[t]++;
  }

  queue<int> q;

  rep(i, V) {
    if (indeg[i] == 0) q.push(i);
  }

  while (!q.empty()) {
    t = q.front();
    q.pop();
    ans.push_back(t);
    rep(i, G[t].size()) {
      int s = G[t][i];
      indeg[s]--;
      if (indeg[s] == 0) q.push(s);
    }
  }

  rep(i, ans.size()) { cout << ans[i] << endl; }

  return 0;
}
