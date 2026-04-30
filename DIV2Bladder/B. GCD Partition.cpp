#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// so this problem basically says that suppose we would be having sum
// then sum - prefix_sum[i] ==> sum1 if sum % n == 0 then sum - prefix_sum[i] % n = 0 and sum1 % n = 0;
//  only 2 partations would be needed for sure

// thus everytime only 2 partations would be helping us 
int gcd(int a, int b) {
    if (b == 0) return a;
    if (a < b) swap(a , b);
    return gcd(b , a % b);
}

void solve () {
    int n; cin >> n; vector<int> v(n); int sum = 0;

    for (int i = 0; i < n; i++) cin >> v[i] , sum += v[i];

    int prefix_sum = 0 , suffix_sum = 0 , max_gcd = 0 , curr_gcd = 0; 
    
    for (int i = 0; i < n - 1; i++) {
        prefix_sum += v[i];suffix_sum = sum - prefix_sum;
        curr_gcd = gcd(prefix_sum , suffix_sum); max_gcd = max(max_gcd , curr_gcd);
    }

    cout << max_gcd << endl;
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