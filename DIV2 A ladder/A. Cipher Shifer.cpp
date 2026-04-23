#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    s += '0'; char curr = s[0];
    string ans; ans += curr; set<char> st; st.insert(curr);

    for (int i = 1; i < n; i++) {
        curr = s[i];
        if (st.count(curr)) {
            ans += s[i + 1];
            st.clear();
            st.insert(s[i + 1]); 
            i ++;
        }
        else int ok = 1;
    }
    if (ans.back() == '0') ans.pop_back();
    cout << ans << endl;
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