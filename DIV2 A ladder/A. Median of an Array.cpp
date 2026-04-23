#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";


void solve() {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >>v[i];
    sort (v.begin() , v.end());
    int med = 0 , med_pos = 0;
    if (n & 1) {
        med = v[n / 2];
        med_pos = n / 2;
    }
    else {
        med = v[(n / 2) - 1];
        med_pos = (n / 2) - 1;
    }

    int count = 0;
    for (int i = med_pos; i < n; i++) {
        if (med == v[i]) count ++;
    }
    cout << count << endl;
    
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