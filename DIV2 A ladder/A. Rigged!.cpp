#include<bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair<int,int> p1 , pair<int,int> p2) {
    return p1.second < p2.second;
}
void solve() {
    int n; cin >> n;
    vector<pair<int,int>> helper , helper1;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        helper.emplace_back(x , y);
    }
    int ans1 = helper[0].second ;
    helper1.push_back(helper[0]);
    for (int i = 1; i < n; i++) {
        if (ans1 <= helper[i].second) helper1.emplace_back(helper[i].first , helper[i].second);
    }
    if (helper1.size() == 1) {
        cout << helper1[0].first << endl; return;
    }
    
    int x = helper1[0].first; int ok = 1;
    
    for (int i = 1; i < helper1.size(); i++) {
        if (helper1[i].first >= x) {
            ok = 0; break;
        }
    }

    if (ok == 0) {
        cout << -1 << endl; return;
    }
    if (ok == 1) {
        cout << helper1[0].first << endl;
    }
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