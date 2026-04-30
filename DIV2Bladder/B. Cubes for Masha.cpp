#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

vector<int> make (vector<int> x , vector<int> y) {
    vector<int> ans;
    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < y.size(); j++)  {
            int prod = x[i] * 10 + y[j];
            ans.push_back(prod);
        }
    }
    return ans;
}
// one of the most hard to implement questions , in this , we would be basically having to take all the nos except that array
// this we would make a make function which will make all the nos for x[i] and x[j]; and then if i == j then we would continue
// else we would be making all the nos and storing inside a set apart from it , we would be storing the nos inside set as well

// then inside set we would be needing to find the ans which would be taken

void solve () {
    int n; cin >> n;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++) {
        vector<int> ans(6);
        for (int j = 0; j < 6; j++) cin >> ans[j];
        v.push_back(ans);
    }
    vector<int> x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            vector<int> ans = make(v[i] , v[j]);
            for (auto y : ans) x.push_back(y);
        }
    }

    sort(x.begin() , x.end());
    set<int> y; for (auto z : x) y.insert(z);
     int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            y.insert(v[i][j]);
        }
    }
    y.erase(0);

    for (int i = 1; i < 100; i++) {
        if (y.count(i)) {
            int ok = 1;
        }
        else {
            ans = i; break;
        }
    }
    cout << ans - 1 << endl;
}   


signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t = 1; 
    // cin >> t; 
    while (t --) {
        solve();
    }
}