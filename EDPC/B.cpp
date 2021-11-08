#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int N, K, H[101010], dp[101010];

int main() {
  cin >> N >> K;

  rep(i, 0, N) cin >> H[i];

  rep(i, 0, N) dp[i] = inf;
  dp[0] = 0;

  rep(i, 0, N) {
    rep(k, 1, K + 1) {
      dp[i + k] = min(dp[i + k], dp[i] + abs(H[i] - H[i + k]));
    }
  }

  // cout << dp[N - 1] << endl;
  rep(i, 0, N) cout << dp[i] << ", ";

  return 0;
}