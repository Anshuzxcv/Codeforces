#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll check[64];
ll fun(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans++;
        n >>= 1;
    }
    check[ans]++;
}
int main()
{
    ll T, n, i, *a, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        memset(check, 0, sizeof(check));
        for (i = 0; i < n; i++)
            fun(a[i]);
        for (i = 0, ans = 0; i < 64; i++)
            ans += (check[i] * (check[i] - 1)) / 2;
        cout << ans << endl;
    }
}