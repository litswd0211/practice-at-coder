#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int a, n;
  cin >> a >> n;

  const int MX = 1000000;
  vector<int> dist(MX, inf);
  queue<int> q;
  auto push = [&](int v, int d) {
    if (dist[v] != inf) return;
    dist[v] = d;
    q.push(v);
  };
  push(1, 0);

  while (!q.empty()) {
    int v = q.front();
    q.pop();
    int d = dist[v];
    if (ll(v) * a < MX) push(v * a, d + 1);
    if (v >= 10 && v % 10 != 0) {
      string s = to_string(v);
      int len = s.size();
      rotate(s.begin(), s.begin() + (len - 1), s.end());
      int u = stoi(s);
      push(u, d + 1);
    }
  }

  if (dist[n] == inf)
    cout << -1 << endl;
  else
    cout << dist[n] << endl;
  return 0;
}
