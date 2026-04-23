#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

// basically we would be needing to check if anything doesnt exceeds the table size if the no is greater then c - diff else c + diff

void solve() {
  int a , b , c;
  cin >> a >> b >> c;
  int diff = abs (b - a); int tablesz = 2 * diff;

  if (b > tablesz || a > tablesz || c > tablesz) {
    cout << -1 << endl; return;
  }

  if (c > diff) cout << c - diff << "\n";
  else cout << c + diff << "\n";
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