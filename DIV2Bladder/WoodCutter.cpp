#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// this is a simple question what needs to be done is that you would be needing to see if you can take to left or right
// means that the first and last can go to left and right respectively and thus what can be done next is that 
// you need to check if a tree can come to left cordinate if yes then you can come to left coorfinate else this can come to the right coorfinate
// and you can increament the right coordinate
void solve() {
    int n; cin >> n;
    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        v.emplace_back(x , y);
    }

    if (n <= 2) {
        cout << n << endl; return;
    }
    int ans = 2;
    for (int i = 1; i < n - 1; i++) {
        if (v[i].second < v[i].first - v[i - 1].first) {
            ans ++;
        }
        else if (v[i].second < v[i + 1].first - v[i].first) {
            ans ++;
            v[i].first += v[i].second;
        }
    }
    cout << ans << endl;
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
