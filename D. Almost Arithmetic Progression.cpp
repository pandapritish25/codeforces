#include<bits/stdc++.h>
#define int long long
using namespace std;

// making the ap from a and moving to a + d
vector<int> make_ap(int a , int d , int n) {
  vector<int> ans;
  for (int i = 0; i < n; i++) ans.push_back(a) , a = a + d;
  return ans;
}
// comparing the vectors
int compare (vector<int> v1 , vector<int> v2) {
  int count = 0;
  for (int i = 0; i < v1.size(); i++) if (v1[i] != v2[i]) count ++;
  return count;
}

bool array_correct(vector<int> v , vector<int> x) {
  int n = v.size(); bool ok = true;
  for (int i = 0; i < n; i++) {
    if (abs(x[i] - v[i]) > 1) ok = false;
  }
  return ok;
}

void solve() {
  int n; cin >> n; vector<int> v(n); set <int> s;
  for (int i = 0; i < n; i++) cin >> v[i] , s.insert(v[i]);

  // only in single element
  if (s.size() == 1) {
    cout << 0 << "\n"; return;
  }

  // sorting the array as per the necessity because we would be needing to check in sorted array only
  if (v[0] >= v[n - 1]) reverse(v.begin() , v.end());
  vector<int> range_cd; int cd = abs(v[0] - v[1]);
  
  // making all the possible ranges;
  range_cd.push_back(cd);range_cd.push_back(cd + 1);range_cd.push_back(cd + 2);
  range_cd.push_back(cd - 1);range_cd.push_back(cd - 2);

  // making the ap for a - 1 , a , a + 1 and cd from cd - 2 to cd + 2;
  vector<vector<int>> store_ap;
  for (int i = 0; i < range_cd.size(); i++) store_ap.push_back(make_ap(v[0] , range_cd[i] , n));
  for (int i = 0; i < range_cd.size(); i++) store_ap.push_back(make_ap(v[0] - 1 , range_cd[i] , n));
  for (int i = 0; i < range_cd.size(); i++) store_ap.push_back(make_ap(v[0] + 1 , range_cd[i] , n));

  sort (store_ap.begin() , store_ap.end()); vector<int> store_res;
  int min1 = 1e18;
  // checking for all the ap
  vector<vector<int>> store_perm_ap;

  // checking all the arrays which can be stored

  for (int i = 0; i < store_ap.size(); i++) if (array_correct(store_ap[i] , v)) store_perm_ap.push_back(store_ap[i]);
  
  // removing all the store permutations which has diff > 1
  if (store_perm_ap.size() == 0) {
    cout << -1 << endl; return;
  }
  
  // comparing all the elements
  for (auto i : store_perm_ap) min1 = min(min1 , compare(i , v));
  cout << min1 << endl;
}

signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    // cin >> test;
    while (test --) {
      solve();
    }
}