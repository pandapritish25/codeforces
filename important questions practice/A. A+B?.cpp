#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second
 
void solve() {
  string s; cin >> s;
  cout << ((s[0] - '0') + (s[2] - '0')) << "\n";
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