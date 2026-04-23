#include<bits/stdc++.h>
#define int long long
using namespace std;

// thus we can say that if the number is divisible then that floor else the floor would
// be floor + 1
int div_mod(int n , int x) {
  if (n % x == 0) return n / x;
  return (n / x) + 1;
}

void solve() {
  // n is floor no and x is in each floow
  int n , x; cin >> n >> x;
  int ans1 = n - 2;

  // if that would be 1 or 2 then the ans is fine
  if (n == 1 || n == 2) {
    cout << 1 << "\n"; return;
  } 
  
  // and the ans would be div x + 1 because of 1st and second floor
  int ans = div_mod(ans1 , x);
  cout << ans + 1 << "\n";
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