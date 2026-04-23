#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve() {
    vector<vector<int>> v;
    for (int i = 0; i < 5; i++) {
        vector<int> x(5);
        for (int j = 0; j < 5; j++) {
            cin >> x[j];
        }
        v.push_back(x);
    }
    pair<int,int> y;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[i][j] == 1) {
                y.first = i; y.second = j;
            }
        }
    }


    int ans1 = abs(2 - y.first); int ans2 = abs(2 - y.second); int sum = ans1 + ans2;
    cout << sum << endl;
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