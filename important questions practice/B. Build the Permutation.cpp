// as usual the most difficult problem ever done
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n , a , b; cin >> n >> a >> b;

  // max you can make is a + b + 2 elements
  if ((a + b + 2 > n) || abs(a - b) > 1) {
    cout << -1 << "\n"; return;
  }

  // max peaks can be n / 2 and valleys can be one lesser os the criteria
  int peaks = 0 , valleys = 0;
  if (a >= b) {
    peaks = n / 2 , valleys = (n / 2) - 1;
    if (a > peaks && b > valleys) {
      cout << -1 << "\n";
      return;
    }
  }
  // checking the other condition
  else if (b > a) {
    peaks = (n / 2) - 1; valleys = n / 2;
    if (a > peaks && b > valleys) {
      cout << -1 << "\n"; return;
    }
  }
 
  // if the peaks are more than valleys
  if (a > b) {
    int req = a + b + 2;
    // storing the a + b + 2 elements
    vector<int> ans (n , 0); vector<int> store; int c_term = n - req + 1 , count = 1;
    // storing the fist n / 2 elements arranging the smaller elements
    for (int i = 0; i < req; i = i + 2)  ans[i] = c_term, c_term ++;
    
    // arranging the larger elements
    for (int i = 1; i < req; i = i + 2) ans[i] = c_term , c_term ++;

    // arranging the rest of elements
    for (int i = n - 1; i > 0; i --) {
      if (ans[i] != 0) break;
      ans[i] = count , count ++;
    }
    for (auto x : ans) cout << x << " "; cout << "\n"; return;
  }

  // if the valleys is more than that of peak
  if (b > a) {
    int c_term = a + b + 2;
    vector<int> ans(n , 0); 

    // arranging the larger elements
    for (int i = 0; i < a + b + 2; i = i + 2) ans[i] = c_term , c_term --;
    c_term = 1;

    // all the smaller elements
    for (int i = 1; i < a + b + 2; i = i + 2) ans[i] = c_term , c_term ++;
    c_term = a + b + 3;

    // arranging the rest of the elements
    for (int i = 0; i < n; i++) if (ans[i] == 0) ans[i] = c_term , c_term ++;
    for (auto x : ans) cout << x << " "; cout << "\n"; return;
  }

  // if the peaks and valleys are exactly the same
  if (a == b) {
    vector<int> ans(n , 0); int tot = a + b + 2;
    // arranging the smaller elements
    int count = 1; for (int i = 0; i < tot; i = i + 2) ans[i] = count , count ++;
    count = a + b + 2;
    // arranging the larger elements
    for (int i = 1; i < tot; i = i + 2) ans[i] = count , count --;

    // arranging the rest of the elements
    count = a + b + 3; for (int i = 0; i < n; i++) if (ans[i] == 0) ans[i] = count , count ++;
    for (auto x : ans) cout << x << " "; cout << "\n"; return;
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