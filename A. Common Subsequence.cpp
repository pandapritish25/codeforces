#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

void solve() {
  int n , x;
  cin >> n >> x;

  vector<int> d1(n) , d2(x);
  for (int i = 0; i < n; i++) cin >> d1[i];
  for (int i = 0; i < x; i++) cin >> d2[i];

  set <int> x1; int ans = -1;

  for (auto i : d1) x1.insert(i);
  for (auto i : d2) {
    if (x1.count(i)) {
      ans = i; break;
    }
  }
  if (ans == -1) cout << "NO\n";
  else cout << "YES\n" << 1 << " " << ans << "\n";
}

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test --) {
      solve();
    }
}