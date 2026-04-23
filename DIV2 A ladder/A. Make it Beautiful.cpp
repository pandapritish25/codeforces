#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
    set<int> s; for (auto x : v) s.insert(x);

    if (s.size() == 1) {
        cout << "NO\n"; return;
    }
    sort(v.begin() , v.end() , greater<int>());
    if (s.size() == n) {
        cout << "YES\n";
        for (auto x : v) cout << x << " ";
        cout << "\n";  return;
    }

    vector<int> ans; int y1 = v[n / 2];
    for (int i = 0; i < n / 2; i++) {
        int ans1 = v[i]; int ans2 = v.back();
        ans.push_back(ans1); ans.push_back(ans2);v.pop_back(); 
    }
    if (n & 1)ans.push_back(y1);
    cout << "YES\n";
    for (auto x : ans) cout << x << " ";
    cout << "\n";

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