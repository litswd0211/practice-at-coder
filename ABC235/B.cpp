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
  int n;
  cin >> n;

  vector<int> h(n);
  rep(i, 0, n) cin >> h[i];

  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (h[ans] < h[i])
      ans = i;
    else
      break;
  }

  cout << h[ans] << endl;
  return 0;
}