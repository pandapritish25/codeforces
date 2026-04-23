#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n; string s; cin >> s;
    int index = -1; 

    for (int i = 0; i < n; i++) {
        if (s[i] == '8') {
            index = i + 1; break;
        }
    }
    if (n - index >= 10 && index != -1) {
        cout << "YES\n"; return;
    }
    cout << "NO\n";
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