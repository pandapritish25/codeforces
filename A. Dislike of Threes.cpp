#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

vector <int> v;

void precompute () {
  for (int i = 1; i <= 6000; i++) {
    if (i % 10 == 3 || i % 3 == 0) continue;
    v.push_back(i);
  }
}
void solve() {
  int n;
  cin >> n;
  cout << v[n - 1] << "\n";
} 

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute();
    int test = 1;
    cin >> test;
    while (test --) {
      solve();
    }
}