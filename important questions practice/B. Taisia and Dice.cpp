#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  int max = 6;
  int n , s , r; cin >> n >> s >> r;
  // getting the last dice
  int d1 = abs(s - r);

  // needed sum would be r
  int req_sum = r ; int div = r / (n - 1);
  int ans1 = r % (n - 1);

  vector<int> ans; for (int i = 0; i < n - 1; i++) ans.push_back(div);

  // increasing the smaller case only
  for (int i = 0; i < ans1; i++) ans[i] = ans[i] + 1;

  // then we would be needing to check the anwser
  ans.push_back(d1); sort(ans.begin() , ans.end());

  for (auto x : ans) cout << x << " "; cout << "\n";
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