#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> minx; vector<int> maxx;

    int min1 = INT_MAX; int max1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        min1 = min(min1 , v[i]);
        minx.push_back(min1);
    }
    for (int i = n - 1; i >= 0; i--) {
        max1 = min(max1 , v[i]);
        maxx.push_back(max1);
    }

    vector<int> ans; bool ok = false;

    int yy = 0 , zz = 0;

    reverse(maxx.begin() , maxx.end());
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) continue;
        int curr = v[i];
        int miny = minx[i - 1]; int maxy = maxx[i + 1];
        if (curr > miny && curr > maxy) {
            ans.push_back(i + 1);
            yy = miny; zz = maxy;
            ok = true; break;
        }
    }

    if (!ok) {
        cout << "NO\n"; return;
    }

    int f_index1 = 0 , f_index2 = 0;

    for (int i = 0; i < ans[0]; i++) {
        if (v[i] == yy) {
            f_index1 = i + 1; break;
        }
    }

    for (int i = ans[0] - 1; i < n; i++) {
        if (v[i] == zz) {
            f_index2 = i + 1; break;
        }
    }
    
    ans.push_back(f_index1); ans.push_back(f_index2); sort(ans.begin() , ans.end());

    if (ok) {
        cout << "YES\n"; for (auto x : ans) cout << x << " ";
        cout << "\n"; return;
    }
    cout << "NO\n";
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