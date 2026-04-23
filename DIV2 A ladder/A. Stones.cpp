#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int a , b , c; cin >> a >> b >> c;
    int ans1 = min(b , c / 2); b-= ans1; c -= ans1;
    int ans2 = min(a , b / 2);
    ans1 += ans2;
    cout << 3 * ans1 << endl;

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