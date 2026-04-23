#include<bits/stdc++.h>
#define int long long
using namespace std;

// sieve for primes
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

// calling primes
vector <int> primes = sieve(100000);

void solve() {
  int n; cin >> n;
  // printing n primes;
  for (int i = 0; i < n; i++) cout << primes[i] << " ";  cout << "\n";
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