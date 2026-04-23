#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    int left = 0 , right = 0;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') left --;
        if (s[i] == 'R') right ++; 
    }
    cout << right - left + 1;
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