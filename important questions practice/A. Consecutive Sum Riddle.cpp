#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  // this will work because -(n - 1) gets cancelled like -(n - 1) -(n - 2) ... n - 2 n - 1 n
  // so -(n - 1) = 1 - n which will cancel all the values till n
  int n; cin >> n;
  cout << 1 - n << " " << n << "\n";
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