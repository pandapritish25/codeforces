#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// so basically if you need to make the array good then first you would be needing to sort the array 
// once the array has been sorted then you would be needing to see how you can convert array a to array b thus for this you need to add some ans 
// in which this will be divisible by previous one then you take any element from here and max element that would be divisible for sure as all elements are multiple for each other
void solve () {
    int n; cin >> n; vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<pair<int,int>> x , y; 
    // taking the positions for elements
    for (int i = 0; i < n; i++) x.emplace_back(v[i] , i);
    sort(x.begin() , x.end());
    // making the ans array
    for (int i = 0; i < n - 1; i++) {
        int ans1 = x[i].first; int ans2 = x[i + 1].first;
        if (ans2 % ans1 == 0) continue;

        int rem = ans2 % ans1; int to_add = ans1 - rem;
        x[i + 1].first += to_add;
    }

    // constructing the array which is needed
    for (auto i : x)  y.emplace_back(i.second , i.first);
    sort(y.begin() , y.end());

    vector<int> cons; for (auto i : y) cons.push_back(i.second);
    vector<pair<int,int>> ans;

    // calculating the value , ignoring the value for zeros
    for (int i = 0; i < cons.size(); i++) {
        int ans1 = cons[i] - v[i];
        if (ans1 == 0) continue;
        ans.emplace_back(i + 1 , ans1);
    } 
    
    // in case of 0 print 0
    if (ans.size() == 0) {
        cout << 0 << endl; return;
    }
    cout << ans.size() << endl; for (auto i : ans) cout << i.first << " " << i.second << endl;
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