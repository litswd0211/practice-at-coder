#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto& i : a)
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n, q;
  cin >> n >> q;

  map<int, vector<int>> mp;
  rep(i, 0, n) {
    int a;
    cin >> a;
    mp[a].push_back(i + 1);
  }

  rep(i, 0, q) {
    int x, k;
    cin >> x >> k;
    vector<int>& p = mp[x];
    if (p.size() < k) {
      cout << -1 << endl;
    } else {
      cout << p[k - 1] << endl;
    }
  }

  return 0;
}