#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
// const int INF = 1e9;

void recursive_comb(int *indexes, int s, int rest,
                    std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int N;
vector<pair<int, int>> All;
int ans;

int main() {
  cin >> N;

  int x, y;
  rep(i, N) {
    cin >> x >> y;
    All.push_back(make_pair(x, y));
  }

  ans = 0;

  // printf("%d %d", All[0].first, All[0].second);
  foreach_comb(N, 3, [](int *indexes) {
    // w.push_back(Pt{indexes[0], indexes[1]});
    pair<int, int> a = All[indexes[0]];
    pair<int, int> b = All[indexes[1]];
    pair<int, int> c = All[indexes[2]];
    int x1 = a.first;
    int y1 = a.second;
    int x2 = b.first;
    int y2 = b.second;
    int x3 = c.first;
    int y3 = c.second;
    x2 -= x1;
    x3 -= x1;
    y2 -= y1;
    y3 -= y1;

    float s = abs(x2 * y3 - x3 * y2) / 2.0;
    if (s > 0) {
      ans++;
    }

    // printf("%d, %d, %d\n", indexes[0] + 1, indexes[1] + 1, indexes[2] + 1);
    // if (!(a.first == b.first && b.first == c.first) &&
    //    !(a.second == b.second && b.second == c.second)) {
    //  ans++;
    //}
  });

  cout << ans << endl;

  return 0;
}