#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1) count ++;
    }
    cout << (count + 1) / 2 + (n - count) << endl;
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