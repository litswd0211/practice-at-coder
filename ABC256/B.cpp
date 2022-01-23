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

  map<int, int> mp;
  rep(i, 0, 4 * n - 1) {
    int a;
    cin >> a;
    mp[a]++;
  }

  for (pair<int, int> p : mp) {
    if (p.second == 3) {
      cout << p.first << endl;
      return 0;
    }
  }

  return 0;
}