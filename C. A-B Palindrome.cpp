#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  int x , y; cin >> x >> y;
  string s; cin >> s; int n = s.length();
  int count1 = x; int count2 = y;

  for (int i = 0; i < n; i++) {
    if (s[i] == '0') count1 --;
    if (s[i] == '1') count2 --;
  }
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == '0' && s[n - i - 1] == '?') s[n - i - 1] = '0', count1 --;
    else if (s[i] == '?' && s[n - i - 1] == '0') s[i] = '0' , count1 --;
    else if (s[i] == '1' && s[n - i - 1] == '?') s[n - i - 1] = '1' , count2 --;
    else if (s[i] == '?' && s[n - i - 1] == '1') s[i] = '1' , count2 --;
  } 
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == '?' && s[n - i - 1] == '?') {
      if (count1 >= count2) {
        s[i] = '0'; s[n - i - 1] = '0'; count1 --; count1 --; 
      }
      else if (count2 > count1) {
        s[i] = '1'; s[n - i - 1] = '1'; count2 --; count2 --; 
      }
    }
  }
  if ((n & 1) && s[n / 2] == '?') {
    if (count1 >= count2) s[n / 2] = '0' , count1 --;
    else if (count2 > count1) s[n / 2] = '1' , count2 --;
  }

  string temp = s; reverse(temp.begin() , temp.end());
  count1 = 0 , count2 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') count1 ++;
    if (s[i] == '1') count2 ++;
  }
  if (temp == s && count1 == x && count2 == y) {
    cout<< s << "\n"; return;
  }
  cout << -1 << "\n";
}
   
signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);  
    int test = 1; 
    cin >> test;
    while (test--) {
      solve();
  }
}