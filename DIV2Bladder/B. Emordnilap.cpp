#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long


// this is a good question in which we would be concatenating x+reverse(x) thus 
// one observation is inversion for all the arrays are same for any number inversion is n * n - 1 as n - 1 c 2 * 2 because 
// select any 2 elements and then you would be having the ans.
// thus for this reason we would be having the anwser the ans as n!(no of permutations) * (n) * (n - 1)
int MAXN_FACTO = 1e5 + 9;
const int MOD = 1e9 + 7;

// this is one of the simple
int mod_mul(int a , int b) {
  int ans1 = a % MOD; int ans2 = b % MOD;
  int ans3 = (((ans1 * ans2) % MOD) + MOD) % MOD; 
  return ans3;
}
vector <int> facto(MAXN_FACTO);
void precompute_factorial() {
  facto[0] = 1;
  int max_compute = MAXN_FACTO; int ans = 1;
  for (int i = 1; i <= max_compute; i++) facto[i] = mod_mul(facto[i - 1] , i);
}
 
void solve() {
  int n; cin >> n;
  int ans = facto[n];
  int ans1 = mod_mul(n , n - 1);
  int ans2 = mod_mul(ans1 , ans);
  cout << ans2 << endl;
}   

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t = 1; 
    precompute_factorial();
    cin >> t; 
    while (t --) {
        solve();
    }
}