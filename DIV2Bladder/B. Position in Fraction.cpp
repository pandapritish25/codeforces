#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// sometimes you dont know what you did but you did fine ,
// so basically you are exactly finding the fractions by doing a = a * 10 and changing the a % b
// thus you collect all the 100005 anwsers and then you have the anwser 

void solve () {
    int a , b; cin >> a >> b;
    int c; cin >> c;

    vector<int> ans1;
    for (int i = 0; i < 100005; i++) {
        a = a % b;
        a = a * 10;
        ans1.push_back(a / b);
    }
    // for (auto x : ans1) cout << x << " ";
    int index = -1;
    for (int i = 0; i < ans1.size(); i++) {
        if (ans1[i] == c) {
            index = i + 1;
            break;
        }
    }

    cout << index << endl;
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