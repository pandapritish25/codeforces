#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

// condition to check the array
bool condition (vector <int> v) {
  bool x1 = (v[0] < v[1]) && (v[0] < v[2]);
  bool x2 = (v[2] < v[3]) && (v[1] < v[3]);
  return x1 & x2;
} 

// maintain the rotation
vector <int> rotation (vector<int> v) {
  vector<int> rotate;
  rotate = {v[2] , v[0] , v[3] , v[1]};
  return rotate;
}

void solve() {
  vector <int> v(4); int ok = 0;
  for (int i = 0; i < 4; i++) cin >> v[i];

  // rotate this multiple times to check if this maintains the rotation array
  for (int i = 0; i < 10; i++) {
    vector<int> r = rotation(v);
    if (condition(r)) {
      ok = 1; break;
    }
    v = r;
  }

  cout << (ok ? "YES\n" : "NO\n");
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