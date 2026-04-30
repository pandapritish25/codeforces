#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int compare(vector<int> v1 , vector<int> v2) {
    int count = 0;  
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) count ++;
    }
    return count;
}

// one of the extremely good questions in which we have been seeing the patterns 
// means first we would be needing to compare the row till n / 2 then we would be needing to compare the middle row
// once both of them have been compared , we can do a count ++

// here comes the real catch as we have to change everything manadatority thus we need to see if this is odd , id this is odd then yes we can change middle element
// if this is not odd , k - count needs to be even because we can change any element even no of times
void solve () {
    int n , k; cin >> n >> k;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++) {
        vector<int> x(n);
        for (int j = 0; j < n; j++) cin >> x[j];
        v.push_back(x);
    }

    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        vector<int> ans1 = v[i];
        vector<int> ans2 = v[n - i - 1];
        reverse(ans2.begin() , ans2.end());
        int ans = compare(ans1 , ans2);
        count += ans;
    }   
    if (n % 2 == 1) {
        int ans = 0;
        int mid = n / 2;
        for (int i = 0; i < n / 2; i++) {
            if (v[mid][i] != v[mid][n - i - 1]) count++;
        }
        count += ans;
    }
    // cout << count << endl;

    if (count <= k) {
        if (n % 2 == 1) {
            cout << "YES\n"; return;
        }
        if (n % 2 == 0) {
            if ((k - count) % 2 == 0) {
                cout << "YES\n"; return;
            }
            else {
                cout << "NO\n"; return;
            }
        }
    }
    cout << "NO\n";
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