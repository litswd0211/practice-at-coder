#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

// int N;
// int C1, C2, C3;
// int A[303];
int N, A[303], C[4];
double dp[303][303][303];

int main() {
  cin >> N;
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, N) C[A[i]]++;

  // int a;
  // rep(i, 0, N) {
  //  cin >> a;
  //  if (a == 1) {
  //    C1++;
  //  } else if (a == 2) {
  //    C2++;
  //  } else {
  //    C3++;
  //  }
  //}
  rep(c3, 0, N + 1) rep(c2, 0, N + 1) rep(c1, 0, N + 1) {
    int sm = c1 + c2 + c3;
    if (sm == 0) continue;

    dp[c1][c2][c3] = 1.0 * N / sm;
    if (c1) dp[c1][c2][c3] += dp[c1 - 1][c2][c3] * c1 / sm;
    if (c2) dp[c1][c2][c3] += dp[c1 + 1][c2 - 1][c3] * c2 / sm;
    if (c3) dp[c1][c2][c3] += dp[c1][c2 + 1][c3 - 1] * c3 / sm;
  }

  printf("%.10f\n", dp[C[1]][C[2]][C[3]]);
  return 0;
}