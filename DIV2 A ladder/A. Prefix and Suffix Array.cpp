#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n;
    int n1 = 2 * n - 2;
    vector<string> v(n1);
    for (int i = 0; i < n1; i++) cin >> v[i];

    map<string,int> mp; for (auto x : v) mp[x] ++;
    int f = 1;
    
    for (int i = 0; i < n1; i++) {
        string y = v[i]; reverse(y.begin() , y.end());
        if (mp.find(y) == mp.end()) {
            f = 0; break;
        }   
        if (mp.find(y) != mp.end()) {
            if (y == v[i] && mp[y] != 2) {
                f = 0; break;
            }
        }
    }   
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