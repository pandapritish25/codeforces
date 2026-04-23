#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int sum = 0;
    int q; cin >> q; int su = 0;
    while (q --) {
        int a, b , c , d;
        cin >> a >> b >> c >> d;
        int ans1 = abs(c - a) + 1;
        int ans2 = abs(d - b) + 1;
        int prod = ans1 * ans2 * 1LL;
        sum += prod;
    }
    cout << sum << endl;
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