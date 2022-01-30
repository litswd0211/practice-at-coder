#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

bool kaibun(string s) {
  ll n = s.size() - 1;
  ll max = s.size();
  rep(i, 0, max) {
    if (s[i] != s[n - i]) return false;
  }
  return true;
}

int main() {
  string s;
  cin >> s;

  if (kaibun(s)) {
    cout << "Yes" << endl;
    return 0;
  }

  ll li = 0;
  ll lacnt = 0;
  while (li < s.size() && s[li] == 'a') {
    lacnt++;
    li++;
  }

  ll ri = s.size() - 1;
  ll racnt = 0;
  while (ri >= 0 && s[ri] == 'a') {
    racnt++;
    ri--;
  }

  if (lacnt >= racnt) {
    cout << "No" << endl;
    return 0;
  }

  int acnt = racnt - lacnt;
  string astr = "";
  rep(i, 0, acnt) astr += "a";

  if (kaibun(astr + s))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
