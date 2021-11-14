#include <bits/stdc++.h>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N;
  cin >> N;

  int S[N];
  // int C[N];
  vector<int> C(N, 0);
  rep(i, 0, N) cin >> S[i];

  rep(a, 1, 334) rep(b, 1, 334) {
    int ans = 4 * a * b + 3 * a + 3 * b;
    rep(i, 0, N) {
      if (ans == S[i]) {
        // printf("a: %d b: %d = ans: %d s: %d\n", a, b, ans, S[i]);
        C[i] = 1;
      }
    }
  }

  int incc = 0;
  rep(i, 0, N) {
    // cout << C[i] << endl;
    if (!C[i]) incc++;
  }

  cout << incc << endl;

  return 0;
}