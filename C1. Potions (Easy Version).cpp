#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n; vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  int sum = 0; set<pair<int,int>> dp;

  for (int i = 0; i < n; i++) {
    sum += v[i]; dp.insert({v[i] , i});
    if (sum < 0) {
      pair <int,int> y = *dp.begin();
      sum -= y.first;
      dp.erase(*dp.begin());
    }
  }
  cout << dp.size() << "\n";
} 
   
signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);  
    int test = 1; 
    // cin >> test;
    while (test--) {
      solve();
  }
}