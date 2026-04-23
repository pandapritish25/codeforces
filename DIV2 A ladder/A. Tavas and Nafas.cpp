#include <bits/stdc++.h>
using namespace std;

string numberToWords(int n) {
    vector<string> ones = {
        "zero","one","two","three","four","five","six","seven","eight","nine",
        "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
        "seventeen","eighteen","nineteen"
    };

    vector<string> tens = {
        "", "", "twenty","thirty","forty","fifty",
        "sixty","seventy","eighty","ninety"
    };

    if (n == 100) return "one hundred";

    if (n < 20) return ones[n];

    int t = n / 10;
    int o = n % 10;

    if (o == 0) return tens[t];
    
    return tens[t] + "-" + ones[o];
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Out of range" << endl;
    } else {
        cout << numberToWords(n) << endl;
    }

    return 0;
}