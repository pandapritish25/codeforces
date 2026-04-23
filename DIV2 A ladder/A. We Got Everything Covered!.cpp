#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    int x , y; cin >> x >> y;
    char c = 'a';
    string d1 , d2;

    for (int i = 0; i < y; i++) {
        d1 += c; c++;
    }
    for (int i = 0; i < x; i++) {
        d2 += d1;
    }
    cout << d2 << endl;
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