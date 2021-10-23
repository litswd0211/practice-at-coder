#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
// const int INF = 1e9;
const int MAX = 51;

int H, W;
int A[MAX][MAX];

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

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

struct Pt {
  int a, b;
};
vector<Pt> h;
vector<Pt> w;

int main() {
  scanf("%d %d", &H, &W);

  int a;
  rep(i, H) {
    rep(j, W) {
      cin >> a;
      A[i][j] = a;
    }
  }

  foreach_comb(H, 2, [](int *indexes) {
    h.push_back(Pt{indexes[0], indexes[1]});
  });

  foreach_comb(W, 2, [](int *indexes) {
    w.push_back(Pt{indexes[0], indexes[1]});
  });

  bool f = false;
  for (Pt ip : h) {
    for (Pt jp : w) {
      if (A[ip.a][jp.a] + A[ip.b][jp.b] > A[ip.b][jp.a] + A[ip.a][jp.b]) {
        f = true;
        break;
      }
    }
  }

  if (f) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}