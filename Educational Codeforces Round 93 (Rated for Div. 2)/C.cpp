#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll T, n, i, ans, sum;
    char c;
    cin >> T;
    while (T--)
    {
        cin >> n;
        map<ll, ll> mp;
        for (i = 0, sum = 0, ans = 0, mp[0] = 1; i < n; i++)
        {
            cin >> c;
            sum += c - '1';
            ans += mp[sum]++;
        }
        cout << ans << endl;
    }
}