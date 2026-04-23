#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
    vector<int> v(7); int sum = 0;
    for(int i = 0; i < 7; i++) cin >> v[i];

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 7; j++) {
            sum = sum + v[j];
            if (sum >= n) {
                cout << j + 1 << endl; return;
            }
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