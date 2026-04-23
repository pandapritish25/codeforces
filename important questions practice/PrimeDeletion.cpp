#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

void solve() {
  string s; cin >> s;

  set <int> primes; vector<int> prime = sieve(100);
  for (auto x : prime) primes.insert(x);


    // just iterate and check if we can get any primes within 100
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j < s.size(); j++) {
      int nums = (s[i] - '0') * 10 + (s[j] - '0');
      if (primes.count(nums)) {
        cout << nums << "\n"; return;
      }
    }
  }

  cout << -1 << "\n";
}


signed main() { 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1; 
    cin >> test;
    while (test --) {
      solve();
    }
}