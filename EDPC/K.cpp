#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int N, K, A[101], dp[100001];

int main() {
  cin >> N >> K;
  rep(i, 1, N + 1) cin >> A[i];

  rep(i, 0, K + 1) {
    int lose = 0, cnt = 0;
    rep(j, 1, N + 1) {
      if (i - A[j] >= 0 && !dp[i - A[j]]) dp[i] = 1;
    }
  }

  if (dp[K])
    printf("First\n");
  else
    printf("Second\n");

  return 0;
}
