#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

void solve() {
  // here we are taking chunks of 2 and then we are making them equal
  // thus we would be getting the ans by taking s[i] != s[i - 1]
  int n; string s1 , s2;
  cin >> n >> s1 >> s2;

  n ++ ; s1 += '0'; s2 += '0';
  vector <int> dx , dy , dz;

  for (int i = 1; i < n; i++) {
    if (s1[i] != s1[i - 1]) dx.push_back(i);
    if (s2[i] != s2[i - 1]) dy.push_back(i);
  }

  sort(dx.begin() , dx.end());
  sort(dy.begin() , dy.end()); reverse(dy.begin() , dy.end());

  int ans = (dx.size() + dy.size()) * 1LL;
  dz.push_back(ans);
  for (auto x : dx) dz.push_back(x);
  for (auto x : dy) dz.push_back(x);

  for (auto x : dz) cout << x << " ";
  cout << "\n";
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