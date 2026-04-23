#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve () {
  int n; cin >> n; map <int,int> mp; bool odd = true;
  vector<int> v(n * 4); for (int i = 0; i < n * 4; i++) cin >> v[i] , mp[v[i]] ++;

  sort (v.begin() , v.end()); int ar = v[0] * v.back();
  for (int i = 0; i < 2 * n; i = i + 2) {
    if (odd == false) break;
    if (v[i] != v[i + 1]) odd = false;
    if (v[4 * n - i - 1] != v[4 * n - i - 2]) odd = false;
    if (v[i] * v[(4 * n) - i - 1] != ar) odd = false; 
  }

  cout << (odd ? "YES\n" : "NO\n");
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