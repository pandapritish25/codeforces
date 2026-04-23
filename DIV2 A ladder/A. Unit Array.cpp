#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  int count1 = 0 , count2 = 0; int sum = 0;
  
  for (int i = 0; i < n; i++) {
    if (v[i] == -1) count1 ++;
    else count2 ++;
    sum += v[i];
  } 

  if (sum >= 0 && count1 % 2 == 0) {
    cout << 0 << "\n"; return;
  }
  if (sum >= 0 && count1 % 2 == 1) {
    cout << 1 << "\n"; return;
  }
  int count = 0;

  for (int i = 0; i < count1; i++) {
    if (sum >= 0) break;
    sum = sum + 2;
    count ++;
  }

  count1 = count1 - count;
  if (count1 % 2 == 1) count ++;
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