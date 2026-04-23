#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n; int x = 0; int y;
    for (int i = 0; i < n; i++) {
        cin >> y; 
        x = y | x;
    }
    cout << x << endl;

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