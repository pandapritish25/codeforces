#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n;
  if (n % 11 == 0 || n % 111 == 0) {
    cout << "YES\n"; return;
  }

  while (n > 0) {
    if (n % 11 == 0) {
      cout << "YES\n"; return;
    }
    n -= 111;
  }

  cout << "NO\n";
} 
   
signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);  
    int test = 1; 
    cin >> test;
    while (test--) {
      solve();
  }
}