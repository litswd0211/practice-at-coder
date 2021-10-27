#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(n) for (int i = 0; i < (int)n; i++)
#define repi(i, a, b) for (int i = (int)a; i < (int)b; i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;

int main() {
  int n, m;
  cin >> n >> m;

  int C[m];
  rep(i, m) { cin >> C[i]; }

  int T[n];  // 金額：最小の枚数
  rep(i, n + 1) T[i] = INF;
  T[0] = 0;

  rep(i, m) {
    repi(j, C[i], n + 1) { T[j] = min(T[j], T[j - C[i]] + 1); }
  }

  cout << T[n] << endl;

  return 0;
}