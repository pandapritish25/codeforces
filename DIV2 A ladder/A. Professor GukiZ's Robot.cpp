#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int a , b, c , d; cin >> a >> b >> c >> d;
    cout << max(abs(c - a) , abs(b - d));
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