#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 2 << endl; return;
    }

    int ans = n / 3;
    if (n % 3 == 0) {
        cout << ans << endl; return;
    }
    cout << ans + 1 << endl;
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