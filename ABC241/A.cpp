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
  vector<int> a(10);
  rep(i, 0, 10) cin >> a[i];

  int k = 0;
  rep(i, 0, 3) { k = a[k]; }

  cout << k << endl;
  return 0;
}