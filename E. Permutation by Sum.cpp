#include<bits/stdc++.h>
#define int long long
using namespace std;

int ceil_div(int n) {
  if (n % 2 == 1) {
    int ans1 = (n + 1) / 2; int ans2 = n;
    int prod = ans1 * ans2 * 1LL; return prod;
  }
  if (n % 2 == 0) {
    int ans1 = n / 2; int ans2 = n + 1;
    int prod = ans1 * ans2 * 1LL; return prod;
  }
  return 0;
}
bool is_perm(vector<int> v) {
  sort(v.begin() , v.end());
  for (int i = 0; i < v.size(); i++) {
    if (v[i] != i + 1) return false;
  }
  return true;
}

void solve() {
  int n , l , r , s; cin >> n >> l >> r >> s;
  vector<int> v(n , 0); int count = r - l + 1;
  for (int i = l - 1; i < r; i++) v[i] = count , count --;

  int sum = s; int curr_sum = ceil_div((r - l + 1)); int max_ele = n;
  
  for (int i = l - 1; i < r; i++) {
    int sum1 = curr_sum - v[i] + max_ele;
    if (sum1 < s) {
      curr_sum = sum1;
      v[i] = max_ele; max_ele --; continue;
    }
    else {
      v[i] = s - curr_sum + v[i]; break; 
    }
  }
  // for (auto x : v) cout << x << " ";
  set<int> common; vector <int> uncommon; for (auto x : v) common.insert(x); common.erase(0);
  for (int i = 1; i <= n; i++) {
    if (common.count(i)) continue;
    uncommon.push_back(i);
  }
  count = 0; sum = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      v[i] = uncommon[count]; count ++;
    }
  }
  for (int i = l - 1; i < r; i++) sum += v[i];

  if (sum != s || !is_perm(v)) {
    cout << -1 << "\n"; return;
  }

  for (auto x : v) cout << x << " "; cout << "\n";
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