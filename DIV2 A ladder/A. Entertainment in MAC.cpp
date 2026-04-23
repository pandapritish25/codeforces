#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string s1 = s; reverse(s1.begin() , s1.end());

    if (n == 1) {
        vector<string> v;
        v.push_back(s);
        string x1 = s + s1;
        v.push_back(x1);
        sort(v.begin() , v.end());
        cout << v[0] << endl; return;
    }
    if (n > 1) {
        vector<string> v;
        v.push_back(s);
        string x1 = s + s1;
        string x2 = s1 + s;
        v.push_back(x1); reverse(x1.begin() , x1.end());
        v.push_back(x2); reverse(x2.begin() , x2.end());
        v.push_back(x1); v.push_back(x2);
        sort(v.begin() , v.end()); cout << v[0] << endl;
        return;
    }
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