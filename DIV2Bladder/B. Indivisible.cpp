#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// so basically what happens is that for every 2 element you would be needing to distort the array 
// means that you would be needing to change the array or swap the elements because 1 + 2 + 3 is divisible by 3 if you bring 4 then this would be fiind
// thus simply swap the elements
void solve () {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl; return;
    }
    if (n & 1) {
        cout << -1 << endl; return;
    }
    int ans1 = (n * (n + 1)) / 2;

    if (ans1 % n == 0) {
        cout << -1 << endl; return;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) ans.push_back(i);
    sort(ans.begin() , ans.end() , greater<int>());

    for (int i = 0; i < n; i += 2)  swap(ans[i] , ans[i + 1]);
    for (auto x : ans) cout << x << " ";
    cout << endl;
}    


signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t = 1; 
    cin >> t; 
    while (t --) {
        solve();
    }
}