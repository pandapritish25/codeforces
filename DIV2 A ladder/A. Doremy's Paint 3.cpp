#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

bool check(vector<int> v) {
    if (v.size() == 2) return true;
    set<int> s;
    for (int i = 0; i < v.size() - 1; i++) s.insert(v[i] + v[i + 1]);
    return s.size() == 1;
}
vector<int> form(vector<int> v) {
    vector<int> ans; int n = v.size(); int x = v[n / 2];
    for (int i = 0; i < n / 2; i++) {
        ans.push_back(v[i]); ans.push_back(v.back()); v.pop_back();
    }
    if (n & 1)  ans.push_back(x);
    return ans;
}
void solve() {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
    if (v.size() == 2) {
        cout << "Yes\n"; return;
    }

    vector<int> ans1; vector<int> ans2;
    sort(v.begin() , v.end());
    ans1 = form(v); reverse(v.begin() , v.end()); ans2 = form(v);

    bool x1 = check(ans1); bool x2 = check(ans2);
    if (x1 || x2) cout << "Yes\n";
    else cout << "No\n";
    
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