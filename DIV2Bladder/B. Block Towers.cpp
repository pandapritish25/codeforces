// basically you would be needing to see the no of tradeoffs for the first tower thus for 1st tower
// you would be needing to see the contribution for each of the values and they needs to be sorted for highest contribution

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// exact no of blocks which a can give to b is b - a + 1 / 2 so this would be the ans
int calc_ceil(int a , int b) {
    return (b - a + 1) / 2;
}
// problem to remember as we would be needing all the values at the first anwser thus we would be needing to change for the 1st tower
// thus we can sort and see the exact no of tradeoffs between each of the towers , this was a good questions , got a little confused

void solve () {
    int n; cin >> n;
    vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() + 1 , v.end());

    int curr_block = v[0];

    for (int i = 1; i < n; i++) {
        if (curr_block < v[i]) {
            int can_make = calc_ceil(curr_block , v[i]);
            curr_block += can_make;
        }
    }
    cout << curr_block << endl;

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