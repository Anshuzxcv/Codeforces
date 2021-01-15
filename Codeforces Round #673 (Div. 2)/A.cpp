#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, k, *a, i, ans;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 1, ans = 0; i < n; i++)
            ans += (k - a[i]) / a[0];
        cout << ans << endl;
    }
}