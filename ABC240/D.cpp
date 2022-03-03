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

struct ball {
  int a, num;
};

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  rep(i, 0, n) cin >> A[i];

  stack<ball> s;
  int ans = 0;
  fore(a, A) {
    if (s.empty()) {
      s.push(ball{a, 1});
      ans += 1;
    } else {
      ball t = s.top();
      s.pop();
      if (t.a == a) {
        if (t.a == t.num + 1) {
          ans -= t.num;
        } else {
          s.push(ball{a, t.num + 1});
          ans += 1;
        }
      } else {
        s.push(t);
        s.push(ball{a, 1});
        ans += 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
