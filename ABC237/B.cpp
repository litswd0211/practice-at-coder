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
  int h, w;
  cin >> h >> w;

  vector<vector<int>> b(w, vector<int>(h));

  rep(i, 0, h) rep(j, 0, w) { cin >> b[j][i]; }

  rep(i, 0, w) {
    rep(j, 0, h) { cout << b[i][j] << " "; }
    cout << endl;
  }
}
