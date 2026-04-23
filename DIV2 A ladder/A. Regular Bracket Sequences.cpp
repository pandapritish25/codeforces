#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int count1 = 0; int count2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << '(';
        }
        for (int j = i; j < n; j++) {
            cout << ')';
        }
        for (int j = 0; j < count1; j++) {
            cout << "()";
        }
        count1 ++;
        cout << endl;
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