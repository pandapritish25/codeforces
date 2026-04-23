#include<bits/stdc++.h>
#define int long long
using namespace std;

// so this problem tells 
// sum / n == sum - ai - aj / n - 2 --> sum * n - 2 * sum = sum * n - ai * n - aj * n; --> 2 * sum = n(ai + aj) --> 2 * sum / n = ai + aj
 
void solve() {
  int n; cin >> n; int sum = 0; map <int,int> mp; int count = 0;

  vector <int> v (n); for (int i = 0; i < n; i++) cin >> v[i] , sum += v[i] , mp[v[i]] ++;
  if ((2 * sum) % n != 0) { cout << 0 << endl; return; }

  int sum_need = (2 * sum) / n;

  for (int i = 0; i < n; i++) {
    count += mp[sum_need - v[i]];
    if ((sum_need - v[i]) == v[i]) count --;
  }
  
  int final_ans = count / 2; cout << final_ans << "\n";
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