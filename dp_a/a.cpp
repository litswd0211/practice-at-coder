#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(n) for (int i = 0; i < (int)n; i++)
#define repi(i, a, b) for (int i = (int)a; i < (int)b; i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;

int main() {
  int N;
  cin >> N;

  int h[N + 1];
  h[0] = 0;
  rep(i, N) cin >> h[i + 1];

  int d[N + 1];
  rep(i, N + 1) d[i] = 0;

  repi(i, 2, N + 1) {
    d[i] =
        min(d[i - 1] + abs(h[i - 1] - h[i]), d[i - 2] + abs(h[i - 2] - h[i]));
  }

  cout << d[N] << endl;

  // rep(i, N + 1) { cout << d[i] << ", "; }

  return 0;
}
