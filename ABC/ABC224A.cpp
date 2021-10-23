#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
using namespace std::literals;

int main() {
  string S;
  cin >> S;

  string er = "er";
  string ist = "ist";

  if (S.size() >= er.size() &&
      S.find(er, S.size() - er.size()) != std::string::npos) {
    cout << "er" << endl;
  }

  if (S.size() >= ist.size() &&
      S.find(ist, S.size() - ist.size()) != std::string::npos) {
    cout << "ist" << endl;
  }

  return 0;
}
