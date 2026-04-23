#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  // so basically we would be needing to resolve the second case and also the third case 
  // means if sum will be v[n] and would be v[n - 1] both cases should be considered

  int n; cin >> n; vector<int> v(n + 2);
  for (int i = 0; i < n + 2; i++) cin >> v[i];
  sort(v.begin() , v.end());

  int sum = 0; for (int i = 0; i < n; i++) sum += v[i];

  if (sum == v[n] || sum == v[n + 1]) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n"; return; 
  }

  int index = -1;
  sum += v[n];

  for (int i = 0; i < n + 1; i++) {
    if (sum - v[i] == v.back()) {
      index = i; break;
    }
  }

  // cout << index << endl;

  if (index == -1) {
    cout << -1 << "\n"; return;
  }

  for (int i = 0; i <= n; i++) {
    if (index == i) continue;
    cout << v[i] << " ";
  }
  cout << "\n";

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