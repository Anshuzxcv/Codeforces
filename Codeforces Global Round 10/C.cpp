#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll T, n, *a, i, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 1, ans = 0; i < n; i++)
            if (a[i] < a[i - 1])
                ans += a[i - 1] - a[i];
        cout << ans << endl;
    }
}