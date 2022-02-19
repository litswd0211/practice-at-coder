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

struct p {
  int x, y;
};

vector<p> kousiten(p pp) {
  vector<p> a = vector<p>();
  a.push_back({pp.x - 1, pp.y + 2});
  a.push_back({pp.x - 1, pp.y - 2});
  a.push_back({pp.x + 1, pp.y + 2});
  a.push_back({pp.x + 1, pp.y - 2});
  a.push_back({pp.x - 2, pp.y + 1});
  a.push_back({pp.x - 2, pp.y - 1});
  a.push_back({pp.x + 2, pp.y + 1});
  a.push_back({pp.x + 2, pp.y - 1});
  return a;
}

int main() {
  p p1, p2;
  cin >> p1.x >> p1.y >> p2.x >> p2.y;

  vector<p> a1 = kousiten(p1);
  vector<p> a2 = kousiten(p2);

  fore(i, a1) fore(j, a2) {
    if (i.x == j.x && i.y == j.y) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
