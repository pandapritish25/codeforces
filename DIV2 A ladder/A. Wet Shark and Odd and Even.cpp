#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
    int sum = 0;
    for (auto x : v) sum += x;
    if (sum % 2 == 0) {
        cout << sum << endl; return;
    }
    sort(v.begin() , v.end());
    for (int i = 0; i < n; i++) {
        if ((sum - v[i]) % 2 == 0) {
            cout << sum - v[i] << endl; return;
        }
    }
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