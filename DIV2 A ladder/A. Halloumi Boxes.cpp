#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n , x; cin >> n >> x;
    vector<int> v(n); vector<int> s;
    for (int i = 0; i < n; i++) cin >> v[i];
    s = v; sort(s.begin() , s.end());

    if (s == v) {
        cout << "YES\n"; return;
    }

    cout << (x == 1 ? "NO\n" : "YES\n");
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