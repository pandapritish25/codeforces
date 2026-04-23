#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n , x; cin >> n >> x; int count = 0;

    while (1) {
        int temp1 = n , temp2 = x;
        if (n == 1 && x == 1) break;
        if (n < x) swap(n , x);
        if (n % x == 0) {
            count = count + n / x;
            break;
        }
        count = count + (n / x);
        n = temp2; x = temp1 % temp2;
    } 
    cout << count << endl;
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