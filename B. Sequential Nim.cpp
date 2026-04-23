#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n; cin >> n;
  int count1 = 0; string f = "First" , s = "Second";
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int a; cin >> a;v.push_back(a);
  }

  for (int i = 0; i < n; i++) {
    if (v[i] == 1) count1 ++;
    else break;
  }

  if (count1 == n && n % 2 == 0) {
    cout << s << endl; return;
  }
  if (count1 == n && n % 2 == 1) {
    cout << f << endl; return;
  }
  if (count1 % 2 == 1) {
    cout << s << endl; return;
  }
  cout << f << endl; return;
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