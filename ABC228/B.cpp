#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n + 1);
  rep(i, 1, n + 1) cin >> a[i];

  vector<bool> k(n + 1, 0);
  queue<int> q;
  q.push(x);

  int ans = 0;
  while (!q.empty()) {
    int c = q.front();
    q.pop();
    if (k[c]) {
      continue;
    } else {
      k[c] = 1;
      q.push(a[c]);
      ans++;
    }
  }

  // int ans = 0;
  // rep(i, 1, n + 1) if (i) ans++;
  cout << ans << endl;

  return 0;
}