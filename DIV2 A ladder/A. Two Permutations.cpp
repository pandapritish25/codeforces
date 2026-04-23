#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n , a , b;
    cin >> n >> a >> b;

    if (n == a && a == b) {
        cout << "Yes\n"; return;
    }
    if (n == a || n == b) {
        cout << "No\n"; return;
    }
    int ans1 = a + b;
    int diff = n - (a + b);
    if (diff <= 1) {
        cout << "No\n"; return;
    }
    cout << "Yes\n";

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