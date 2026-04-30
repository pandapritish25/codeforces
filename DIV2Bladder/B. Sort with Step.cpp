#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// this is one of the good questions , we would be needing to see that if we can be able to sort 
// as per the condition like if the condition is curr_pos = mp[v[i]] and needed pos is v[i] - 1 if they are divisible then yes we are good
// if not then we would be needing to store the count if (count == 2) then yes one step is there which allows us
// else we wont be able to do this in 1 flip
void solve () {
    int n; cin >> n; int k; cin >> k;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];

    int count = 0;

    for (int i = 0; i < n; i++) {
        int ans1 = v[i] - 1; int curr_pos = i;
        if ((ans1 - curr_pos) % k != 0) count ++;
    }

    if (count == 0) cout << 0 << endl;
    else if (count == 2) cout << 1 << endl;
    else cout << -1 << endl; 
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