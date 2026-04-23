#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n; map <int,int> mp;
  // storing them all in a map

  vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i] , mp[v[i]] ++;

  // if only one set this contains then the ans would be the freq of that

  if (mp.size() == 1) {
    for (auto x : mp) cout << x.second << "\n"; return;
  }


  int sum = 0;
  // ans would be diff[i] - diff[i - 1];

  for (auto i : mp) {
    sum = sum + max(mp[i.first] - mp[i.first - 1] , 0LL);
  }

  cout << sum << "\n";

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