#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n;
  while (n % 2 == 0) n = n / 2;
  cout << (n != 1 ? "YES\n" : "NO\n");
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