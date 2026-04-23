#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

void solve() {
  int n , k; cin >> n >> k;

  vector<int> ans (n , 0); int sum = 1;
  int count = 1; ans[0] = 1;

  // making a array with different sums
  for (int i = 1; i < n; i++) {
    sum += count; if (sum >= k) break;
    ans[i] = sum; count ++;
  }

  set <int> perm; 
  // checking if this permutation exists or not
  for (auto x : ans) perm.insert(x); perm.erase(0);
  vector<int> store; int index = -1;
  
  for (int i = 0; i < n; i++) 
    if (ans[i] == 0) {
      index = i; break;
    }

  // if this exists with all different then print it
  if (index == -1) {
    sort (ans.begin() , ans.end());
    for (auto x : ans) cout << x << " "; cout << "\n";
    return;
  }
  // else fill the permutation and then sort this

  for (int i = k; i > 0; i --) {
    if (index == n) break;
    if (perm.count(i)) continue;
    ans[index] = i; index ++;
  }
  sort (ans.begin() , ans.end());

  for (auto i : ans) cout << i << " "; cout << "\n";
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