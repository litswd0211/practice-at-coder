#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N, M;
  cin >> N >> M;

  int B[N][M];
  rep(i, 0, N) rep(j, 0, M) cin >> B[i][j];
  rep(i, 0, N) rep(j, 0, M) B[i][j]--;

  int si = B[0][0] / 7;
  int sj = B[0][0] % 7;
  if (sj + M - 1 >= 7) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, 0, N) rep(j, 0, M) {
    if (B[i][j] != (si + i) * 7 + (sj + j)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}