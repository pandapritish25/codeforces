#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int x , y , k; cin >> x >> y >> k;
    int ans1 = k * (y + 1); ans1 --;
    int x1 = ans1 / (x - 1); if (ans1 % (x - 1) != 0) x1 ++;
    cout << x1 + k << endl;
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