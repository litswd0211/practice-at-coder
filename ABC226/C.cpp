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

  ll T[N + 1];
  vector<int> G[N + 1];

  rep(i, 1, N + 1) {
    ll t;
    int K, a;
    cin >> t >> K;
    T[i] = t;

    rep(k, 0, K) {
      cin >> a;
      G[i].push_back(a);
    }
  }

  // int crr = N;
  queue<int> que;
  que.push(N);
  // bool d[N + 1];
  vector<bool> d(N + 1, false);

  ll ans = 0;

  while (!que.empty()) {
    int crr = que.front();
    que.pop();

    if (d[crr]) continue;

    ans += T[crr];
    d[crr] = true;

    fore(bef, G[crr]) { que.push(bef); }
  }

  cout << ans << endl;

  return 0;
}
