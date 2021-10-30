#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  string S;
  cin >> S;

  if (S[0] == S[1] && S[1] == S[2] && S[2] == S[0]) {
    cout << 1 << endl;
  } else if (S[0] == S[1] || S[1] == S[2] || S[2] == S[0]) {
    cout << 3 << endl;
  } else {
    cout << 6 << endl;
  }

  return 0;
}