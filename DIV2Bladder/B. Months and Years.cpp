#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long


// one of the good problems in which you would be basically having ans1 as nonleap , 
// ans2 as leap and then you will have a combined for laep+nonleap and nonleap + leap thus after having all of them
// you can make combinatroics of all the subarrays
// once you make , you need to extract all subarays and then you need to see the count29 is < 2 means in 24 months only 1 29 can come
// thus then you need to check if array a is a part of array b or not
void solve () {
    // months , nonleap months
    vector<int> ans1 = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
    // months , leap months
    vector<int> ans2 = {31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
    vector<int> combined1 , combined2;
    // making combined array for nonleap + leap
    for (auto x : ans1) combined1.push_back(x);
    for (auto x : ans2) combined1.push_back(x);
    // making combined array for leap+nonleap
    for (auto x : ans2) combined2.push_back(x);
    for (auto x : ans1) combined2.push_back(x);


    vector<int> combined3 , combined4;
    
    // then you are basically pushing all arrays 5 times
    vector<int> leap , non_leap;
    for (int i = 0; i < 5; i++) {
        for (auto x : ans2)  leap.push_back(x); 
    }
    // then you are basically pushing all arrays 5 times

    for (int i = 0; i < 5; i++) {
        for (auto x : ans1)  non_leap.push_back(x); 
    }
    // then you are basically pushing all arrays 3 times
    for (int i = 0; i < 3; i++) {
        for (auto x : combined1) combined3.push_back(x);
    }
    // then you are basically pushing all arrays 3 times
    for (int i = 0; i < 4; i++) {
        for (auto x : combined2) combined4.push_back(x);
    }

    vector<vector<int>> helper;

    int n; cin >> n; vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];

    // counting for 29
    int count29 = 0;
    for (auto x : v) if (x == 29) count29 ++;

    if (count29 >= 2) {
        cout << "No\n"; return;
    }
    // then u are collecting all arrays for array size x for nonLeap
    for (int i = 0; i < non_leap.size(); i++) {
        vector<int> ans;
        for (int j = i; j < i + n; j++)  {
            ans.push_back(non_leap[j]);
        }
        helper.push_back(ans);
    }
    // then u are collecting all arrays for array size x for Leap
    for (int i = 0; i < leap.size(); i++) {
        vector<int> ans;
        for (int j = i; j < i + n; j++)  {
            ans.push_back(leap[j]);
        }
        helper.push_back(ans);
    }
    // then u are collecting all arrays for array size x for combined1
    for (int i = 0; i < combined3.size(); i++) {
        vector<int> ans;
        for (int j = i; j < i + n; j++)  {
            ans.push_back(combined3[j]);
        }
        helper.push_back(ans);
    }
    // then u are collecting all arrays for array size x for combined2
    for (int i = 0; i < combined4.size(); i++) {
        vector<int> ans;
        for (int j = i; j < i + n; j++)  {
            ans.push_back(combined4[j]);
        }
        helper.push_back(ans);
    }


    bool ok = false;
    // checking if that value is there or not
    for (int i = 0; i < helper.size(); i++) {
        if (helper[i] == v) {
            ok = true;
        }
    }

    if (ok) cout << "Yes\n";
    else cout << "No\n";
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