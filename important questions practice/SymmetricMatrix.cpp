#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n , m; cin >> n >> m;

  // just to check if we would be able to make a square
  bool ok = false;
  for (int i = 0; i < n; i++) {
    int a , b , c , d; cin >> a >> b >> c >> d;
    if (b == c) ok = true;
  }

  if (m % 2 != 0) ok = false; 
  cout << (ok ? "YES\n" : "NO\n");

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