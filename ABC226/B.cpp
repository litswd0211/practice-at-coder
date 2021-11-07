#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main() {
  int N;
  cin >> N;

  // vector<int> A[N];
  set<vector<int>> A;

  rep(i, 0, N) {
    int l;
    cin >> l;
    vector<int> aa;
    rep(j, 0, l) {
      int a;
      cin >> a;
      // A[i].push_back(a);
      aa.push_back(a);
    }
    A.insert(aa);
  }

  cout << A.size() << endl;

  return 0;
}
