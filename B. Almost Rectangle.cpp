#include<bits/stdc++.h>
#define int long long
using namespace std;

void print_ans(vector<string> v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}
void solve() {
  int n; cin >> n;
  vector<string> v(n);

  for (int i = 0; i < n; i++) cin >> v[i];

  vector<pair <int,int>> index;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) 
      if (v[i][j] == '*') index.push_back({i , j});
  }

  pair <int,int> p1 = index[0]; pair <int,int> p2 = index[1];
  pair <int,int> ans1 , ans2;

  if (p1.first == p2.first && p1.first != n - 1) {
    ans1.first = p1.first + 1; ans1.second = p1.second;
    ans2.first = p2.first + 1; ans2.second = p2.second;
    v[ans1.first][ans1.second] = '*'; v[ans2.first][ans2.second] = '*';
    print_ans(v); return;
  }
  else if (p1.first == p2.first && p1.first == n - 1) {
    ans1.first = p1.first - 1; ans1.second = p1.second;
    ans2.first = p2.first - 1; ans2.second = p2.second;
    v[ans1.first][ans1.second] = '*'; v[ans2.first][ans2.second] = '*';
    print_ans(v); return;
  }
  else if (p1.second == p2.second && p1.second != n - 1) {
    ans1.first = p1.first; ans1.second = p1.second + 1;
    ans2.first = p2.first; ans2.second = p2.second + 1;
    v[ans1.first][ans1.second] = '*'; v[ans2.first][ans2.second] = '*';
    print_ans(v); return;
  }
  else if (p1.second == p2.second && p1.second == n - 1) {
    ans1.first = p1.first; ans1.second = p1.second - 1;
    ans2.first = p2.first; ans2.second = p2.second - 1;
    v[ans1.first][ans1.second] = '*'; v[ans2.first][ans2.second] = '*';
    print_ans(v); return;
  }
  else {
    ans1.first = p1.first; ans1.second = p2.second;
    ans2.first = p2.first; ans2.second = p1.second;
    v[ans1.first][ans1.second] = '*'; v[ans2.first][ans2.second] = '*';
    print_ans(v); return;
  }
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