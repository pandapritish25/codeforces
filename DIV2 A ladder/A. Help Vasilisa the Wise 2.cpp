#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int r1 , r2 , c1 , c2 , d1 , d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int b = (r1 - c1 + d2) / 2;
    int c = d2 - b;
    int a = (c1 - r2 + d1) / 2;
    int d = d1 - a;
    vector<int> v(4); v[0] = a; v[1] = b; v[2] = c; v[3] = d;
    bool ok = true;
    for (int i = 0; i < 4; i++) if (v[i] >= 10 || v[i] < 1) ok = false;
    

    set<int> s; s.insert(a); s.insert(b); s.insert(c); s.insert(d);
    if (a + b == r1 && a + c == c1 && b + d == c2 && c + d == r2 && a + d == d1 && b + c == d2 && s.size() == 4 && ok == true) {
        cout << a << " " << b << endl << c << " " << d; return;
    }
    cout << -1 << endl;
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