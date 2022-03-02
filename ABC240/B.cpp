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
  int n;
  cin >> n;

  set<int> s;
  rep(i, 0, n) {
    int a;
    cin >> a;
    s.insert(a);
  }

  cout << s.size() << endl;

  return 0;
}