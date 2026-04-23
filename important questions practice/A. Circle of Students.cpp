#include<bits/stdc++.h>
#define int long long
using namespace std;


// checking for clockwise
vector <int> clockwise_rotate(vector<int> v) {
  vector <int> clockwise;
  for (int i = 1; i < v.size(); i++) clockwise.push_back(v[i]); 
  clockwise.push_back(v[0]); return clockwise;
}

// checking for anti-clockwise
vector <int> anticlockwise_rotate(vector<int> v) {
  vector <int> anticlockwise; anticlockwise.push_back(v.back());
  for (int i = 0; i < v.size() - 1; i++) anticlockwise.push_back(v[i]);
  return anticlockwise; 
}
// checking for sorted
bool is_sorted(vector<int> v) {
  vector<int> x = v; sort(x.begin() , x.end());
  vector<int> y = v; sort(y.begin() , y.end()); reverse(y.begin() , y.end());
  if (x == v || y == v) return true;
  return false;
}
void solve () {
  // possible to start a round dance --> 
  int n; cin >> n; bool ok1 = false , ok2 = false;
  vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
  vector<int> x = v;

  if (is_sorted(v)) {
    cout << "YES\n"; return;
  }
  // checking by rotating the array if this is sorted or not clockwise
  for (int i = 0; i < n + 1; i++) {
    vector<int> ans1 = clockwise_rotate(v);
    // for (auto i : ans1) cout << i << " "; cout << endl;
    if (is_sorted(v)) {
      ok1 = true; break;
    }
    v = ans1;
  }
  // checking by rotating the array if this is sorted or not anticlockwise
  for (int i = 0; i < n + 1; i++) {
    vector<int> ans1 = anticlockwise_rotate(x);
    // for (auto i : ans1) cout << i << " "; cout << endl;
    if (is_sorted(x)) {
      ok1 = true; break;
    }
    x = ans1;
  }
  cout << (ok1 == true ? "YES\n" : "NO\n");
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