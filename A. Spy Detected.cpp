#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  // basically take a map and then check which element has freq 1 and print the index
  int n;
  cin >> n;

  map <int,int> mp; vector <int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i]; mp[v[i]] ++;
  }

  int ans = 0; int index = -1;

  for (auto i : mp) {
    if (i.second == 1) {
      ans = i.first;
    }
  }

  for (int i = 0; i < n; i++) {
    if (v[i] == ans) {
      index = (i + 1);
      break;
    }
  }

  cout << index << endl;
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