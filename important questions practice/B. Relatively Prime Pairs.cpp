#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n , x; cin >> n >> x;
  // in case of odd n - x we would be needing to have a no
  if ((abs(n - x) + 1) % 2 == 1) cout << "NO\n";
  else {
    // else just print n and n + 1 for all n
    cout << "YES\n";
    for (int i = n ; i <= x; i = i + 2) {
      cout << i << ' ' << i + 1 << "\n";
    }
  } 
} 

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    // cin >> test;
    while (test --) {
      solve();
    }
}