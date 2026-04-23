#include<bits/stdc++.h>
using namespace std;
#define int long long


int left(pair<int,int> left , pair<int,int> right) {
    if (left.first > right.first && left.second == right.second) return 1;
    if (left.first < right.first && left.second == right.second) return 2;
    if (left.first == right.first && left.second < right.second) return 3;
    if (left.first == right.first && left.second > right.second) return 4;
    return 0;
}
bool check(set<int> s) {
    if (s.count(1) && s.count(2) && s.count(3) && s.count(4)) return true;
    return false;
}
void solve() {
    int n; cin >> n; int count = 0;
    vector<pair<int,int>> helper;

    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        helper.emplace_back(x , y);
    }

    for (int i = 0; i < n; i++) {
        set<int> s1;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            int ans = left(helper[i] , helper[j]);
            s1.insert(ans);
        }
        if (check(s1)) count ++;
    }
    cout << count << endl;
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