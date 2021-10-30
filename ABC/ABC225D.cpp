#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

struct Tr {
  int i, bef, aft;
};

int main() {
  int N, Q;
  cin >> N >> Q;

  Tr T[N + 1];

  rep(i, 1, N + 1) T[i] = Tr{i, -1, -1};

  int q, x, y;
  rep(i, 0, Q) {
    cin >> q;

    if (q == 1) {
      cin >> x >> y;
      T[x].aft = y;
      T[y].bef = x;
    } else if (q == 2) {
      cin >> x >> y;
      T[x].aft = -1;
      T[y].bef = -1;
    } else if (q == 3) {
      cin >> x;
      vector<int> ans;
      ans.push_back(x);
      int crr = x;
      while (T[crr].bef != -1) {
        crr = T[crr].bef;
        ans.insert(ans.begin(), crr);
      }
      crr = x;
      while (T[crr].aft != -1) {
        crr = T[crr].aft;
        ans.push_back(crr);
      }
      // cout << ans.size() << endl;
      cout << ans.size() << "" << endl;
      rep(i, 0, ans.size()) {
        cout << ans[i];
        if (i != ans.size() - 1) cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}