#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

bool find(string s1 , string s2) {
    if (s1.find(s2) != string::npos) return true;
    return false;
}
// simple take a string of 2 and then you need to search in rest of string is it there or not
// if yes then we have the ans because if you take a string of 2 and then you can append that thus you are reducing one operation
void solve () {
    int n; cin >> n;
    string s; cin >> s;
    bool ok = false;

    for (int i = 0; i < n - 1; i++) {
        string s1; s1.push_back(s[i]);s1.push_back(s[i + 1]);
        string ans = s.substr(i + 2 , n);
        if (find(ans , s1)) {
            ok = true; break;
        }
    }   

    if (ok) cout << "YES\n";
    else cout << "NO\n";
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