#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  ll N, M;
  cin >> N >> M;

  ll B[N][M];
  rep(i, 0, N) rep(j, 0, M) { cin >> B[i][j]; }

  bool ans = true;
  rep(i, 0, N) rep(j, 0, M) {
    if (j < M - 1) {
      if (B[i][j + 1] - B[i][j] != 1) ans = false;
    }
    if (i < N - 1) {
      if (B[i + 1][j] - B[i][j] != 7) ans = false;
    }
    if (j < M - 1 && i < N - 1) {
      if (B[i + 1][j + 1] - B[i][j] != 8) ans = false;
    }
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}