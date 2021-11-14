#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N, K, A;
  cin >> N >> K >> A;

  int ans = A;
  rep(i, 1, K) {
    ans++;
    if (ans > N) ans = 1;
  }

  cout << ans << endl;

  return 0;
}