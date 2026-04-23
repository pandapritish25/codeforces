#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int x; cin >> x; sum = sum + x;
    }
    cout << -1 * sum * 1LL << endl;
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