#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n;cin >> n;
    int x , odd = 0 , even = 0;
    for (int i = 0; i < 2 * n; i++) {
        cin >> x;
        if (x & 1) odd ++; else even ++;
    }
    cout << (odd == even ? "Yes\n" : "No\n"); 
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