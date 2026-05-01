#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
 
// one of the good problems in which you would be basically handling the no of arrays that you would be taking
// so all the i and n - i rem can be taken into one consideration in case they are equal just make one array else do 2 * min1 + 1
// now if this is the mid then also do the count ++ and then start deleting from the array
// rest of all the nos can be there only 1 array
void solve () {
    int n , k; cin >> n >> k; vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
 
    map <int,int> mp; 
    for (int i = 0; i < n; i++) {
        int ans1 = v[i] % k;
        mp[ans1] ++;
    }
    int count = 0;
 
    for (int i = 0; i < k; i++) {
        if (i == 0) {
            if (mp.find(0) != mp.end()) {
                count ++;
                mp.erase(0);
            }
            continue;
        }
 
        int ans1 = i; int ans2 = k - i;
 
        if (mp.find(ans1) != mp.end()) {
            if (ans1 == ans2) {
                mp.erase(ans1);
                count ++; continue;
            }
            if (mp.find(ans2) != mp.end()) {
                // cout << ans1 << " " << ans2 << endl;
                // cout << "hello" << endl;
                int x1 = mp[ans1]; int x2 = mp[ans2];
                // cout << x1 << " " << x2 << endl;
                int min1 = min(x1 , x2); int needed_elements = 2 * min1 + 1;
                // cout << "curr_count " << count << endl; 
                if (x1 == x2) {
                    mp.erase(ans1); mp.erase(ans2);
                    count ++; continue;
                }
                // cout << needed_elements << endl;
                count += (x1 + x2 - needed_elements);
                count ++;
                mp.erase(ans1); mp.erase(ans2);
                continue;
            }
            else {
                count += mp[ans1];
                mp.erase(ans1);
                continue;
            }   
        }
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