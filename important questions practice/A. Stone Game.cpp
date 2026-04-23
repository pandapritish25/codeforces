#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n;
  vector <int> v(n); for (int i = 0; i < n; i++) cin >> v[i];

  int max1 = max_element(v.begin() , v.end()) - v.begin(); int min1 = min_element(v.begin() , v.end()) - v.begin();

  max1 ++; min1 ++;
  // the index would be in max1 , // right hand side cuts
  int case1 = max(max1 , min1); int case2 = n - min(max1 , min1) + 1; 
  // case 3 is from right and left hand side;
  int case3 = min(max1 , min1) + n - (max(max1 , min1)) + 1;

  int ans = min({case1 , case2 , case3}); cout << ans << endl;
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