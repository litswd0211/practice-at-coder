#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
const int INF = 1e9;

struct Node {
  int loc, p, l, r;
};

struct Point {
  int id, x, y;
};

bool lessX(const Point &p1, const Point &p2) { return p1.x < p2.x; }
bool lessY(const Point &p1, const Point &p2) { return p1.y < p2.y; }
bool lessId(const Point &p1, const Point &p2) { return p1.id < p2.id; }

const int MAX = 1000000;
const int NIL = -1;

int N;
Point P[MAX];
Node T[MAX];
int np;

int makeKDTree(int l, int r, int dep) {
  if (l >= r) return NIL;

  int mid = (l + r) / 2;
  int t = np++;

  if (dep % 2 == 0) {
    sort(P + l, P + r, lessX);
  } else {
    sort(P + l, P + r, lessY);
  }

  T[t].loc = mid;
  T[t].l = makeKDTree(l, mid, dep + 1);
  T[t].r = makeKDTree(mid + 1, r, dep + 1);

  return t;
}

void find(int v, int sx, int tx, int sy, int ty, int dep, vector<Point> &ans) {
  int x = P[T[v].loc].x;
  int y = P[T[v].loc].y;

  if (sx <= x && x <= tx && sy <= y && y <= ty) {
    ans.push_back(P[T[v].loc]);
  }

  if (dep % 2 == 0) {
    if (T[v].l != NIL && sx <= x) {
      find(T[v].l, sx, tx, sy, ty, dep + 1, ans);
    }
    if (T[v].r != NIL && x <= tx) {
      find(T[v].r, sx, tx, sy, ty, dep + 1, ans);
    }
  } else {
    if (T[v].l != NIL && sy <= y) {
      find(T[v].l, sx, tx, sy, ty, dep + 1, ans);
    }
    if (T[v].r != NIL && y <= ty) {
      find(T[v].r, sx, tx, sy, ty, dep + 1, ans);
    }
  }
}

int main() {
  scanf("%d", &N);

  int x, y;
  rep(i, N) {
    scanf("%d %d", &x, &y);
    P[i] = Point{i, x, y};
    T[i] = Node{0, -1, -1, -1};
  }

  np = 0;
  int root = makeKDTree(0, N, 0);

  int q;
  scanf("%d", &q);
  int sx, tx, sy, ty;
  vector<Point> ans;
  rep(i, q) {
    scanf("%d %d %d %d", &sx, &tx, &sy, &ty);
    ans.clear();
    find(root, sx, tx, sy, ty, 0, ans);
    sort(ans.begin(), ans.end(), lessId);
    rep(j, ans.size()) { printf("%d\n", ans[j].id); }
    printf("\n");
  }

  return 0;
}
