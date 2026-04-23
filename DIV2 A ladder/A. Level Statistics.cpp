#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) {
        int x , y; cin >> x >> y; v.emplace_back(x , y);
    }

    if (n == 1) {
        if (v[0].second <= v[0].first) {
            cout << "YES\n"; return;
        }
        cout << "NO\n";
        return;
    }

    int f = 1;
    
    for (int i = 0; i < n - 1; i++) {
        pair<int,int> p1 = v[i]; pair<int,int> p2 = v[i + 1];
        if (p1.first > p2.first || p1.second > p2.second || p1.first < p1.second || p2.first < p2.second) {
            f = 0; break;
        }
        int diff1 = p2.first - p1.first; int diff2 = p2.second - p1.second;
        if (diff2 > diff1) f = 0;
    }
    if (v.back().second > v.back().first) f = 0;
    cout << (f == 1 ? "YES\n" : "NO\n");

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