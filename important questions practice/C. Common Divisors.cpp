#include<bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

int count_fact(int n) {
  set <int> s;
  for (int i = 1; i < sqrt(n) + 1; i++) {
    if (n % i == 0) s.insert(i) , s.insert(n / i);
  }
  return s.size();
}
void solve () {
  int n; cin >> n;
  vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
  int gcd1 = v[0];
  for (int i = 0; i < n; i++) gcd1 = gcd(v[i] , gcd1);

  int ans = count_fact(gcd1); cout << ans;
} 

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    // cin >> test;
    while (test --) {
      solve();
    }
}