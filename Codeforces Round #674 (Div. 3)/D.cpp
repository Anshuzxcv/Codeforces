#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n, *a, i, *s, ans = 0;
    cin >> n;
    a = new ll[n];
    s = new ll[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0, s[0] = 0; i < n; i++)
        s[i + 1] = s[i] + a[i];
    map<ll, ll> mp;
    for (i = 0; i <= n; i++) {
        if (mp[s[i]]) {
            mp.clear();
            mp[s[i - 1]]++;
            ans++;
        } else
            mp[s[i - 1]]++;
    }
    cout << ans << endl;
}