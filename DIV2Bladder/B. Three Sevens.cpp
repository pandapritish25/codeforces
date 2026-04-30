#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// one of the best implementations in which you would be finding if anyone has freq 1 in sorted mannerism
// thus what needs to be done here is you would be needing to insert in m and then check if any element has freq 1 
// if yes then thats your ans. and to maintain 1 count for the ans , you can do a mp[hx[i]] ++ and count == 0 
// and increament the count just after encountering this
void solve () {
    int n; cin >> n;
    vector <vector<int>> hx;

    for (int i = 0; i < n; i++) {
        int y; cin >> y; vector<int> x(y);
        for (int j = 0; j < y; j++) cin >> x[j];
        hx.push_back(x);
    }

    map<int,int> mp; vector<int> ans;
    reverse(hx.begin() , hx.end());

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < hx[i].size(); j++) {
            mp[hx[i][j]] ++;
            if (mp[hx[i][j]] == 1 && count == 0) {
                ans.push_back(hx[i][j]);
                count ++;
            } 
            else {
                mp[hx[i][j]] ++;
            }
        }
    }
    if (ans.size() != n) {
        cout << -1 << endl; return;
    }
    reverse(ans.begin() , ans.end());
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