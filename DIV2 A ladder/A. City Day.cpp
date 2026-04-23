#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    // one things is that you should traverse from i - y and then j + x and there you would be getting the ans
    // basically and you should do = for the ans
    int n , x , y;
    cin >> n >> x >> y;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        int f = 1;
        for (int j = max(0LL , i - x); j < i; j++) {
            if (v[i] >= v[j]) {
                f = 0; break;
            }
        }
        for (int j = i + 1; j <= min(n - 1 , i + y); j++) {
            if (v[i] >= v[j]) {
                f = 0; break;
            }
        }
        if (f == 1) {
            cout << i + 1; return;
        }
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