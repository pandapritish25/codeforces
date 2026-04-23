#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  int n; cin >> n; vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i]; int count = 0;

  for (int i = 0; i < n - 1; i++) {
    if (v[i] % 2 == v[i + 1] % 2) count ++;
  }
  cout << count << "\n";
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