#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto& i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  for (int& x : p) {
    int a, b, c;
    cin >> a >> b >> c;
    x = a + b + c;
  }
  vector<int> q = p;
  sort(q.begin(), q.end(), greater<>());

  rep(i, 0, n) {
    if (p[i] + 300 >= q[k - 1])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}