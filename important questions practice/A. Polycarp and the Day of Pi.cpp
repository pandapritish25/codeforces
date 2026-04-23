#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  string s; cin >> s;

  // fetching the value of pi from internet
  string pii = "3141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201";

  int count = 0 , n = s.length();
  // checking how many digits are equal

  for (int i = 0; i < n; i++) {
    if (s[i] == pii[i]) count ++;
    else break;
  }

  cout << count << "\n";
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