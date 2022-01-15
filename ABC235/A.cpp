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
  char a, b, c;
  cin >> a >> b >> c;

  string abc = "";
  abc += a;
  abc += b;
  abc += c;

  string bca = "";
  bca += b;
  bca += c;
  bca += a;

  string cab = "";
  cab += c;
  cab += a;
  cab += b;

  cout << stoi(abc) + stoi(bca) + stoi(cab) << endl;

  return 0;
}