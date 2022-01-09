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
  ll k;
  cin >> k;

  vector<char> ans;

  for (int i = 0; k > 0; i++) {
    if (k % 2 == 0)
      ans.push_back('0');
    else
      ans.push_back('2');

    k /= 2;
  }

  reverse(ans.begin(), ans.end());

  fore(c, ans) cout << c;
  cout << endl;

  return 0;
}