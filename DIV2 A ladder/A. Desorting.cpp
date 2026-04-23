#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> x = v; sort(x.begin() , x.end());
    if (x != v) {
        cout << 0 << endl; return;
    }

    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int diff = v[i + 1] - v[i];
        ans = min(ans , (diff / 2) + 1);   
    }
    
    cout << ans << endl;
    
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