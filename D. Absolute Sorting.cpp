#include<bits/stdc++.h>
#define int long long
using namespace std;
#define ff first
#define ss second

// checking if this is sorted increasing
bool sorted_inc(vector<int> v) {
  vector<int> temp = v;
  sort (temp.begin() , temp.end());
  return temp == v;
}
// checking if this is sorted decreasing
bool sorted_dec(vector<int> v) {
  vector<int> temp = v;
  sort (temp.begin() , temp.end()); reverse(temp.begin() , temp.end());
  return temp == v;
}

bool check(int n , vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    int ans1 = abs (v[i] - n); v[i] = ans1;
  }
  return sorted_inc(v);
}
// basically we would be needing to sort 2 numbers insted of sorting the whole array then only we would be getting the ans not the first and the last element will everytime work its the avg which has the highest difference

int ceil (int a , int b) {
  int ans = 0;
  if ((a + b) % 2 == 0) ans = ((a + b) / 2) * 1LL;
  else ans = ((a + b + 1) / 2) * 1LL;
  return ans;
}

void solve() {
  int n; cin >> n;

  // check if this is sorted in increasing or decreasing manner
  vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
  if (sorted_inc(v)) {
    cout << 0 << "\n"; return;
  }
  // if sorted decreasing then max element would be the ans;
  if (sorted_dec(v)) {
    int ans = *max_element(v.begin() , v.end());
    cout << ans << "\n"; return;
  }

  // the solution is basically we would be needing to check if (ans1 > ans2) or v[i] > v[i + 1] then we would be needing to whats needed to sort them and that is a + b / 2;
  // in the example of 10 and 7 we would be needing to subtract 9 not 8 so the ceil value needs to be taken

  int max1 = 0;
  for (int i = 0; i < n - 1; i++) {
    if (v[i] > v[i + 1]) {
      int ans = ceil(v[i] , v[i + 1]);
      max1 = max(max1 , ans);
    } 
  }
  
  
  if (check(max1 , v)) cout << max1 << "\n";
  else cout << -1 << "\n";

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