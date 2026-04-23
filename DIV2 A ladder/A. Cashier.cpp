    #include<bits/stdc++.h>
    using namespace std;
    #define int long long
    #define endl "\n";

    void solve() {
        int n , x , y; cin >> n >> x >> y;

        vector <pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            int a , b; cin >> a >> b;
            v.push_back({a , a + b});
        }
        v.push_back({x , 0});

        int prev_end = 0; int sum = 0;

        for (int i = 0; i <= n; i++) {
            sum = sum + ((v[i].first - prev_end) / y);
            prev_end = v[i].second;
        }
        cout << sum << endl;
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