#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// simple as one cant be impleneted , just you need to move the ans to 2 so add 1 for wherever 1 is present make this 2
// once this 2 is there if v[i] % v[i - 1] == 0then just add 1 to v[i]
void solve () {
    int n; cin >> n; vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) if (v[i] == 1) v[i] ++;
    
    for (int i = 1; i < n; i++)   if (v[i] % v[i - 1] == 0) v[i] ++;
    
    for (auto x : v)  cout << x << " ";
    
    cout << endl;
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