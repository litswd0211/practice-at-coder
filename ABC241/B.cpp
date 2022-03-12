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
  int n, m;
  cin >> n >> m;

  map<int, int> A;
  rep(i, 0, n) {
    int a;
    cin >> a;
    A[a]++;
  }

  rep(i, 0, m) {
    int b;
    cin >> b;

    if (A[b] <= 0) {
      cout << "No" << endl;
      return 0;
    }

    A[b]--;
  }

  cout << "Yes" << endl;
  return 0;
}