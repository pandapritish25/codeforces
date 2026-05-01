#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// calculation for mex
int mex(set<int> s , int n) {
    int mex = -1;
    for (int i = 0; i <= n + 2; i++) {
        if (s.count(i)) {
            int ok = 1;
        }
        else {
            mex = i; break;
        }
    }
    return mex;
}
// calculation for max
int max(set<int> s) {
    auto it = s.end(); it --;
    return *it;
}
// calculation for the ceil value
int calc_ceil(int a, int b) {
    int ans1 = a + b;
    if (ans1 % 2 == 0) return ans1 / 2;
    else return (ans1 / 2) + 1;
}

// simple problem in this you would be needing to calculate the mex and also the max and in this manner what needed to be done is if in case any element would be repeating and max and mex would be the same then we wont have ther ans
// calculate the no of steps , in case the value is present then simple we would be having the same mex and max and then same things would be repeating
// in case the max and mex wont be same then we would be having the ans
void solve () {
    int n , k; cin >> n >> k;
    int no_of_steps_mex;
    set<int> s1 , s2; 
    for (int i = 0; i < n; i++) {
        int a; cin >> a; s1.insert(a); s2.insert(a);
    }

    if (k == 0) {
        cout << s1.size() << endl; return;
    }
    set<int> mex1; for (int i = 0; i < n; i++) mex1.insert(i);
    // mex should be s1 then we would be having s2.size() + k as one increaments
    if (mex1 == s1) {
        cout << s2.size() + k << endl;
        return;
    }

    int ok = 0;
    // calculate the no of steps , in case the value is present then simple we would be having the same mex and max and then same things would be repeating
    for (int i = 0; i < k; i++) {
        int ans1 = mex(s1 , n);
        int ans2 = max(s1);

        // calc_ceil (ans1 , ans2); and then check if this is present if this is present then we wont have the ans and that same thing would be repeating
        int x1 = calc_ceil(ans1 , ans2);
        if (s1.count(x1)) {
            ok = 1;
            break;
        }
        else  s1.insert(x1);
    }
    
    if (ok == 1 || k <= n) {
        cout << s1.size() << endl; return;
    }
    if (k > n) {
        cout << s2.size() + k << endl;
        return;
    }
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
