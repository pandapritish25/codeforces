#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n , x , t; cin >> n >> x >> t;
  // if arranged by coloumn then the cell no is
  int cols_org = -1;
  // coloumn would be t / n if divisible else t / n + 1
  if (t % n == 0) cols_org = t / n; else cols_org = (t / n) + 1; 
  // row would be t % n and if thats 0 then row is n
  int row_org = (t % n); if (row_org == 0) row_org = n;
 
  //now to find the no our ans is x * row + cols
  int ans = x * (row_org - 1) + cols_org; cout << ans << "\n";

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