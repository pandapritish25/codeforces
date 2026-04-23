#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

vector<int> primes = sieve(1e6 + 4);

// factorisation
vector<int> prime_fact (int n) {
  vector<int> ans;
  for (int i = 0; i < primes.size(); i++) if (n % primes[i] == 0) ans.push_back(primes[i]);
  return ans;
}

// counting the no of primes factors
int count_fact (int n , int x) {
  int count = 0; while (n % x == 0) n = n / x , count ++;
  return count;
}

void solve() {
  int n; cin >> n; vector<int> x = prime_fact(n);

  // maintaining the overflows
  if (x.size() == 0) {
    cout << "NO\n"; return;
  }
  // counting all the factors
  vector<int> countfact; for (int i = 0; i < x.size(); i++) countfact.push_back(count_fact(n , x[i]));
  set <int> ans;

  // second overflows
  if (countfact.size() == 0) {
    cout << "NO\n"; return;
  }

  if (x.size() == 1) {
    // count the no of factors
    vector<int> countfact; countfact.push_back(count_fact(n , x[0]));

    // if they are less than 3 then gone
    if (countfact[0] < 3) {
      cout << "NO\n"; return;
    }

    // else ans is x , x^2 and n / x ^ 3
    int prod = x[0] * x[0] * 1LL * x[0];
    // inserting all the ans and then removing 0 & 1
    ans.insert(x[0]) , ans.insert(x[0] * x[0]) , ans.insert(n / prod); ans.erase(0); ans.erase(1);

    if (ans.size() == 3) {
      cout << "YES\n"; for (auto x : ans) cout << x << " "; cout << "\n"; return;
    }
    cout << "NO\n"; return;
  }
  // push the first and the second factor and then check if 3rd fact exists or not
      // inserting all the ans and then removing 0 & 1
  ans.insert(x[0]); ans.insert(x[1]); ans.insert(n / (x[0] * x[1] * 1LL));  ans.erase(0); ans.erase(1);
  if (ans.size() == 3) {
    cout << "YES\n"; for (auto x : ans) cout << x << " "; cout << "\n"; return;
  }
  cout << "NO\n"; return;
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