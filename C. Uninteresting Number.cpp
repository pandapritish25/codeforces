#include<bits/stdc++.h>
#define int long long
using namespace std;
 
// now i can square any digit and then place that so the digits are 2 and 3
// if 2 is squared then add 4 else add 6 // sum. --> 2x + 6y
// sum + 2x + 6y should be divisible by 9 and x and y can be anything
void solve() {
  string s; cin >> s; int n = s.length();
  int count2 = 0 , count3 = 0 , sum = 0;

  for (int i = 0; i < n; i++) {
    if ((s[i] - '0') == 2) count2 ++;
    if ((s[i] - '0') == 3) count3 ++;
    sum += (s[i] - '0');
  }

  if (sum % 9 == 0) {
    cout << "YES\n"; return;
  }

  if (count2 == 0) {
    for (int i = 1; i <= count3; i++) {
      int temp = sum + (6 * i);
      if (temp % 9 == 0) {
        cout << "YES\n"; return;
      }
    }
  }

  if (count3 == 0) {
    for (int i = 1; i <= count2; i++) {
      int temp = sum + (2 * i);
      if (temp % 9 == 0) {
        cout << "YES\n"; return;
      }
    }
  }

  for (int i = 0; i <= count2; i++) {
    for (int j = 0; j <= count3; j++) {
      int temp = sum + (2 * i) + (6 * j);
      if (temp % 9 == 0) {
        cout << "YES\n"; return;
      }
    }
  }
  
  cout << "NO\n";
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