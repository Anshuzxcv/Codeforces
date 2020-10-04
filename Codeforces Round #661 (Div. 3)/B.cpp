#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, *a, *b, min_a, min_b, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        b = new ll[n];
        for (i = 0, min_a = INT32_MAX; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min_a)
                min_a = a[i];
        }
        for (i = 0, min_b = INT32_MAX; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < min_b)
                min_b = b[i];
        }
        for (i = 0, ans = 0; i < n; i++)
            ans += max(a[i] - min_a, b[i] - min_b);
        cout << ans << "\n";
    }
}