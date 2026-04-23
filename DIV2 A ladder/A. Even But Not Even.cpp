#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (s.length() == 1) {
        cout << -1 << endl; return;
    }
    int index = 0; int count = 0;
    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') % 2 == 1) {
            index = i;
        }
        else {
            count ++;
        }
    }
    if (count == n) {
        cout << -1 << endl;return;
    }

    string ans = s.substr(0 , index + 1); int sum = 0;
    for (int i = 0; i < ans.size(); i++) sum = sum + (ans[i] - '0');
    if (sum % 2 == 0) {
        cout << ans << endl;return;
    }

    for(int i = ans.size() - 2; i >= 0; i--) {
        if ((sum - (ans[i] - '0')) % 2 == 0) {
            index = i; break;
        }
    }

    string ans1; sum = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (i == index) continue;
        ans1 += ans[i]; sum = sum + (ans[i] - '0');
    }
    if (sum % 2 == 0 && ans1.back() % 2 == 1) {
        cout << ans1 << endl; return;
    }
    cout << -1 << endl;

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