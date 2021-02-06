#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll power(ll n, ll p) {
    ll ans = 1;
    while (p > 0) {
        if (p & 1)
            ans = ans * n % mod;
        n = n * n % mod;
        p >>= 1;
    }
    return ans;
}
int main() {
    ll len, left, right, temp = 0, ans = 0, i, digit;
    string n;
    cin >> n;
    len = n.length();
    for (i = 1; i <= len; i++) {
        digit = n[len - i] - '0';
        left = len - i;
        right = i - 1;
        temp = (temp + (i - 1) * power(10, (i - 2)) % mod) % mod;
        ans = (ans + (((left * (left + 1) / 2) % mod) * (power(10, right) * digit % mod)) % mod) % mod;
        ans = (ans + digit * temp % mod) % mod;
    }
    cout << ans << endl;
}