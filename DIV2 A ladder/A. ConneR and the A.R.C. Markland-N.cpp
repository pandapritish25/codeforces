#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n , s , k; set<int> s1;
    cin >> n >> s >> k;
    vector<int> v(k); for (int i = 0; i < k; i++) cin >> v[i];
    sort (v.begin() , v.end());
    v.insert(v.begin() , INT_MIN); v.push_back(INT_MAX);

    int index = lower_bound(v.begin() , v.end() , s) - v.begin();
    int ans1 = 0 ,  ans2 = 0;

    if (v[index] != s) {
        cout << 0 << endl;return;
    }
    while (1) {
        if (v[index + 1] - v[index] == 1) {
            index ++;
        }
        if (v[index + 1] == INT_MAX) {
            if (v[index] >= n){
                ans1 = INT_MAX;
                break;
            }
            else {
                ans1 = v[index] + 1;
                break;
            }
        } 
        if (v[index + 1] - v[index] > 1) {
            ans1 = v[index] + 1; break;
        }       
    }

    while (1) {
        if (v[index] - v[index - 1] == 1) {
            index --;
        }
        if (v[index - 1] == INT_MIN) {
            if (v[index] <= 1) {
                ans2 = INT_MIN;
                break;
            }
            else {
                ans2 = v[index] - 1; break;
            }
        }
        if (v[index] - v[index - 1] > 1) {
            ans2 = v[index] - 1; break;
        }
    }
    int x1 = abs(s - ans1); int x2 = abs(s - ans2);
    cout << min(x1 , x2) << endl;
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