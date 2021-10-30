#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N;
  cin >> N;

  vector<int> G[N];
  int a, b;
  rep(i, 0, N - 1) {
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  bool ans = false;
  rep(i, 0, N) {
    if (G[i].size() == N - 1) ans = true;
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}