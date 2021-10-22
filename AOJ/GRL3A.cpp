#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
// typedef long long ll;
// const int INF = 1e9;
const int VMAX = 100000;

int V, E;
vector<int> G[VMAX];
bool visited[VMAX];
int visited_order[VMAX], parent[VMAX], lowest[VMAX], timer;

void dfs(int crr_v, int pre_v) {
  visited_order[crr_v] = lowest[crr_v] = timer;
  timer++;
  visited[crr_v] = true;

  int nex_v;
  rep(i, G[crr_v].size()) {
    nex_v = G[crr_v][i];
    if (!visited[nex_v]) {
      parent[nex_v] = crr_v;
      dfs(nex_v, crr_v);
      lowest[crr_v] = min(lowest[crr_v], lowest[nex_v]);
    } else if (nex_v != pre_v) {  // backedge
      lowest[crr_v] = min(lowest[crr_v], visited_order[nex_v]);
    }
  }
}

void art_points() {
  int tmp_parent, root_num = 0;
  set<int> ans;

  rep(i, V) {
    if (i == 0) continue;
    tmp_parent = parent[i];
    if (tmp_parent == 0) {
      root_num++;
    } else if (visited_order[tmp_parent] <= lowest[i]) {
      ans.insert(tmp_parent);
    }
  }
  if (root_num > 1) ans.insert(0);

  for (set<int>::iterator it = ans.begin(); it != ans.end(); it++) {
    cout << *it << endl;
  }
}

int main() {
  scanf("%d %d", &V, &E);

  int s, t;
  rep(i, E) {
    scanf("%d %d", &s, &t);
    G[s].push_back(t);
    G[t].push_back(s);
  }

  rep(i, V) { visited[i] = false; }
  timer = 1;
  dfs(0, -1);

  art_points();

  return 0;
}
