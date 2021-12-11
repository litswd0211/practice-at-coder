#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int n;
  cin >> n;

  map<string, int> m;
  rep(i, 0, n) {
    string s;
    cin >> s;
    m[s]++;
  }

  int max = 0;
  string ans;

  for (pair<string, int> p : m) {
    if (max < p.second) {
      max = p.second;
      ans = p.first;
    }
  }

  cout << ans << endl;

  return 0;
}