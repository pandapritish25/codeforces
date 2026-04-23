#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n; int x; cin >> x; int sum = 0; int max1 = 0;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i] , sum += v[i]; 
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % x == 0) count ++;
    }

    if (sum % x != 0) {
        cout << n << endl; return;
    }

    if (count == n) {
        cout << -1 << endl; return;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % x != 0) {
            max1 = max(max1 , n - i - 1);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] % x != 0) {
            max1 = max(max1 , i);
            break;
        }
    }
    cout << max1 << endl;
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