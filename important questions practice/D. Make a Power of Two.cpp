#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<string> store;

void precompute () {
  int pow = 1;store.push_back("1");
  for (int i = 1; i <= 62; i++) pow = pow * 2 , store.push_back(to_string(pow));
}

int lcs (string s1 , string s2) {
  int count1 = 0 , count2 = 0 , counter = 0;
  // reason we would be needing to do this is becuse we would be needing one sided lcs
  while (count1 < s1.length() && count2 < s2.length()) {
    if (s1[count1] == s2[count2]) count1 ++ , count2 ++ , counter ++;
    else count2 ++;
  }
  // final ans would be always s1.size()+ s2.size() - 2 * count we got because that many only we can delete
  // and the final can be added in that nos only
  return (s1.length() + s2.length() - 2 * counter);
}

void solve() {
  string s; cin >> s; int min1 = 1e18;
  for (int i = 0; i < store.size(); i++) min1 = min(min1 , lcs(store[i] , s));
  cout << min1 << "\n";
}

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    precompute();
    cin >> test;
    while (test --) {
      solve();
    }
}