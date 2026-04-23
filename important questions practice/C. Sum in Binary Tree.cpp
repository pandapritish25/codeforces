#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  // sum of binary tree so basically imagine there is a tree with number as 7 then we would go to the hald and then go to other hald
  // as each node parent node is basically half of the second one so we would be needing to make half till this is one so just 
  int n; cin >> n; int sum = 0;
  while (n > 0) {
    sum = sum + n; n = (n / 2) * 1LL;
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