#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

// this is a good question and basically a mapping question , in this we would be finding if 
// basically any of i can be mapped with j or not so what to do is 

void solve() {
    int n; cin >> n;
    vector<int> x(n) ,y(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    int i = 0 , j = 0 , count = 0;
    while (1) {
        if (x[i] <= y[j]) i ++ , j ++ , count ++;
        else j ++;
        if (j == n) break;
    }

    // as only that many elements would be needed
    cout << n - count << endl;
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