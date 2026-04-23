#include<bits/stdc++.h>
#define int long long
using namespace std;

// basically in this problem you should take the if freq of last digit is more than 3 then take only 3 else take that no on this you will have only o(3 cube) operations
void solve() {
  int n; cin >> n; vector<int> store; bool ok = false;
  // taking all the nos
  vector <int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
  
  // storing the last digit of each number;
  map <int,int> mp; for (int i = 0; i < n; i++) mp[v[i] % 10] ++;

  for (auto x : mp) {
    if (x.second >= 3) for (int i = 0; i < 3; i++) store.push_back(x.first);
    else for (int i = 0; i < x.second; i++) store.push_back(x.first);
  }

  // going through all the elements and checking if we can use these numbers for having end digit as 3
  // max operations = 27 *27 * 27 == 19683 ops

  // going through entire array which can have 27 elements
  for (int i = 0; i < store.size(); i++) {
    for (int j = i + 1; j < store.size(); j++) {
      for (int k = j + 1; k < store.size(); k++) {
        int sum = store[i] + store[j] + store[k];
        if (sum % 10 == 3) {
          ok = true;
        }
      }
    }
  }

  cout << (ok ? "YES\n" : "NO\n");

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