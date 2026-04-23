#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

bool is_square (int n) {
  int ans = sqrt (n);
  return ans * ans == n;
}

void solve() {
  int n; cin >> n;
  if (is_square(n)) {
    cout << sqrt(n) << " " << 1 << endl;
    return;
  }
  // checking the range in which this number would lie
  int l1 = sqrt(n); int r1 = sqrt(n) + 1; 
  int l2 = l1 * l1 + 1; int r2 = r1 * r1; l1 = l2; r1 = r2;
  int med = ((r1 - l1) / 2) + l1;
  
  // if thats equal to the median then a == b
  if (med == n) {
    cout << sqrt(r1) << " " << sqrt(r1) << "\n"; return;
  } 

  // if this would be less that of median then coloumn would be same as median only row changes
  if (n < med) {
    int y_cor = sqrt(r1); int x_cor = sqrt(r1) - (med - n);
    cout << x_cor << " " << y_cor << "\n";
  } 

  // if this would be more that of median then row would be same as median only coloumn changes
  else {
    int x_cor = sqrt(r1); int y_cor = sqrt(r1) - (n - med);
    cout << x_cor << " " << y_cor << "\n";
  }
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