#include<bits/stdc++.h>
#define int long long
using namespace std;

// checking the element occuring max no of times
int max_occuring(vector<int> v) {
  map <int,int> mp; for (auto x : v) mp[x] ++;
  int max1 = 0; for (auto i : mp) max1 = max(max1 , i.second);

  int max_occ = 0;
  for (auto x : mp) {
    if (x.second == max1) max_occ = x.first;
  }
  return max_occ;
}

// checking the element occuring min no of times
int min_occuring(vector<int> v) {
  map <int,int> mp; for (auto x : v) mp[x] ++;
  int min1 = INT_MAX; for (auto i : mp) min1 = min(min1 , i.second);

  int min_occ = 0;
  for (auto x : mp) {
    if (x.second == min1) min_occ = x.first;
  }
  return min_occ;
}

void solve() {
  int n; cin >> n;

  vector<vector<int>> v;
  vector<vector<int>> arr;
  int arr1[n - 1][n];

  for (int i = 0; i < n; i++) {
    int sum1 = 0; vector<int> x(n - 1);
    for (int j = 0; j < n - 1; j++) cin >> x[j];
    v.push_back(x);
  }
  // taking the transpose of the array

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n; j++) arr1[i][j] = v[j][i];
  }

  // converting them into a vector

  for (int i = 0; i < n - 1; i++) {
    vector<int> x;
    for (int j = 0; j < n; j++) x.push_back(arr1[i][j]);
    arr.push_back(x);
  }


  vector<int> perm(n);
  int m = n - 1;

  if (n % 2 == 0) {
    // doing this for n / 2 elements
    for (int i = 0; i < m / 2; i++) perm[i] = max_occuring(arr[i]);
    int count = n - 1;

    // doing this for n + 1 / 2 elements
    for (int i = m - 1; i > m / 2; i--) perm[count] = max_occuring(arr[i]) , count --;
    
    // then we would be needing to check for all the 3 cases
    int ans1 = min_occuring(arr[(m / 2) - 1]);
    int ans2 = min_occuring(arr[(m / 2) + 1]);

    perm[(n / 2) - 1] = ans1; perm[n / 2] = ans2;
  }

  else {
    // doing this for n / 2 elements
    for (int i = 0; i < m / 2; i++) perm[i] = max_occuring(arr[i]);
      
    // only perm needs to be checked for the middle row
    int count = n - 1;
    for (int i = m - 1; i >= m / 2; i--) perm[count] = max_occuring(arr[i]) , count --;
    int ans1 = min_occuring(arr[m / 2]);
    perm[n / 2] = ans1; 
  }

  for (auto x : perm) cout << x << " "; cout << "\n";
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