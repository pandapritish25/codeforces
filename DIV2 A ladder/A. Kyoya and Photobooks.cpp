#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    string s; cin >> s;
    int n = s.length();
    // nothing but 26 * (x + 1) - x because x pairs would be there not matching or having repeatations
    cout << 25 * n + 26;
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