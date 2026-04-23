#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a , b , c; cin >> a >> b >> c;
    int cost_1_a = a;
    int cost_1_b = c;

    if (cost_1_a < cost_1_b) {
        cout << 1 << " ";
    }
    else {
        cout << - 1 << " ";
    }

    int cost_of_b_donoughts_1 = a * b;
    int cost_of_b_donoughts_2 = c;

    if (cost_of_b_donoughts_2 < cost_of_b_donoughts_1) {
        cout << b << " ";
    }
    else {
        cout << -1 << " ";
    }
    cout << endl;

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