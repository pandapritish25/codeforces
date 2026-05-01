#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

bool isvalid(string s) {
    set<int> s1;  int ok = 0;

    s1.insert(0); s1.insert(1); s1.insert(2); s1.insert(5); s1.insert(8);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ':') continue;
        int ans1 = s[i] - '0'; 
        if (s1.count(ans1)) {
            ok = 1;
        }
        else {
            ok = 0; break;
        }
    }
    return ok;
}

bool validHours(int h , int m , string ans) {
    string h1 , m1; int index = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == ':') {
            index = i;
            break;
        }
        h1.push_back(ans[i]);
    }
    for (int i = index + 1; i < ans.size(); i++) {
        if (ans[i] == ':') {
            index = i;
            break;
        }
        m1.push_back(ans[i]);
    }
    int ans1 = stoi(h1);
    int ans2 = stoi(m1);
    h --; m --;
    if (ans1 >= h || ans2 >= m) return false;
    return true;
}

string next_time(int h , int m , string ans) {
    h --; m --;
    string h1 , m1; int index = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == ':') {
            index = i;
            break;
        }
        h1.push_back(ans[i]);
    }
    for (int i = index + 1; i < ans.size(); i++) {
        if (ans[i] == ':') {
            index = i;
            break;
        }
        m1.push_back(ans[i]);
    }

    if (h1.size() == 1) {
        reverse(h1.begin() , h1.end());
        h1.push_back('0');
        reverse(h1.begin() , h1.end());
    }
    if (m1.size() == 1) {
        reverse(m1.begin() , m1.end());
        m1.push_back('0');
        reverse(m1.begin() , m1.end());
    }
    int ans1 = stoi(h1);
    int ans2 = stoi(m1);
    if (ans1 > h || ans2 > m) return "00:00";

    if (ans1 == h && ans2 == m) return "00:00";

    if (ans2 != m) {
        string s1 = to_string(ans1);
        string s2 = to_string(ans2 + 1);
        s1.push_back(':');
        s1 += s2;
        return s1;
    }
    if (ans2 == m) {
        ans1 ++;
        string s1 = to_string(ans1);
        s1.push_back(':'); s1.push_back('0'); s1.push_back('0');
        return s1;
    }
    return h1;
}
string mirror_reflected(string s1) {
    string s = s1; reverse(s.begin() , s.end());
    return s;
}
 
void solve() {
    int h , m; string s; cin >> h >> m >> s;

    string curr_time = s;
    string ans;
    cout << next_time(h , m , curr_time) << endl;
    for (int i = 0; i < 10000; i++) {
        // cout << curr_time << endl;
        curr_time = mirror_reflected(s);
        cout << curr_time << endl;
        if (!isvalid(curr_time)) {
            s = next_time(h , m , s);
            curr_time = mirror_reflected(s);
            continue;
        }
        if (isvalid(curr_time)) {
            if(validHours(h , m , curr_time)) {
                ans = s; break;
            } 
        }
    }
    cout << s << endl;
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
