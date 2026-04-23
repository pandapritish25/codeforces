#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

vector<int> check_two (int a , int b) {
  vector<int> ans;
  ans.push_back(-b); ans.push_back(a);
  return ans;
}

vector<int> check_three(int a , int b , int c) {
  vector<int> ans;
  if (a + b != 0) {
    ans.push_back(-c); ans.push_back(-c); ans.push_back(a + b);
    return ans;
  }
  if (b + c != 0) {
    ans.push_back(b + c); ans.push_back(-a); ans.push_back(-a);
    return ans;
  }
  if (a + c != 0) {
    ans.push_back(-b); ans.push_back(a + c); ans.push_back(-b);
    return ans;
  }
  return ans;
}
void solve() {
  int n;
  cin >> n;

  vector<int> v(n) , ans;
  for (int i = 0; i < n; i++) cin >> v[i];

  if (n & 1) {
    vector<int> temp = check_three(v[0] , v[1] , v[2]);
    ans.push_back(temp[0]); ans.push_back(temp[1]); ans.push_back(temp[2]);
    for (int i = 3; i < n - 1; i += 2) {
      vector<int> temp = check_two(v[i] , v[i + 1]);
      ans.push_back(temp[0]); ans.push_back(temp[1]);
    }
    for (auto x : ans) cout << x << " "; cout << "\n";
  } 
  else {
    for (int i = 0; i < n - 1; i += 2) {
      vector<int> temp = check_two(v[i] , v[i + 1]);
      ans.push_back(temp[0]); ans.push_back(temp[1]);
    }
    for (auto x : ans) cout << x << " "; cout << "\n"; 
  }
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