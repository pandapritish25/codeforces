#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve () {
    // if the difference would be 5 then this would be having an 0 because of 2 and 5 or if you take any 5 consective nos , prod end with 0
    // if they are equal then we would be having the ans as 1
    // if the ans >= 5 then we would be having 0 , if ans == 2 consider 107 109 then 108*109
    // similarly if and is 4 then 105 109 then 109 * 108 * 107 * 106 mod 10 thus we have the ans 
    // now after having all the ans , we would be having the values and printing them as needed
    int n , x; cin >> n >> x;
    int ans = abs(x - n);
    if (n == x) {
        cout << 1 << endl; return;
    }
    if (ans >= 5) {
        cout << 0 << endl; return;
    }

    if (ans == 1) {
        cout << x % 10 << endl; return;
    }

    if (ans == 2) {
        int ans1 = x % 10;
        int ans2 = (x - 1) % 10;
        int ans = ans1 * ans2;
        cout << ans % 10 << endl; return;
    }
    if (ans == 3) {
        int ans1 = x % 10;
        int ans2 = (x - 1) % 10;
        int ans3 = (x - 2) % 10;
        int ans = ans1 * ans2 * ans3;
        cout << ans % 10 << endl; return;
    }
    if (ans == 4) {
        int ans1 = x % 10;
        int ans2 = (x - 1) % 10;
        int ans3 = (x - 2) % 10;
        int ans4 = (x - 3) % 10;
        int ans = ans1 * ans2 * ans3 * ans4;
        cout << ans % 10 << endl; return;
    }
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