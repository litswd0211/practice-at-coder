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
  int n, k;
  cin >> n >> k;

  vector<int> p(n);
  rep(i, 0, n) cin >> p[i];

  priority_queue<int, vector<int>, greater<int>> q;
  rep(i, 0, k - 1) q.push(p[i]);
  rep(i, k - 1, n) {
    q.push(p[i]);
    if (q.size() > k) q.pop();
    cout << q.top() << endl;
  }

  return 0;
}