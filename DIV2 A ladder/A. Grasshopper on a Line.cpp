#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n , x; cin >> n >> x;
    if (n % x == 0) {
        cout << 2 << " " << 1 << " " << n - 1 << endl;
        return;
    }
    cout << 1 << " " << n << endl;
    
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