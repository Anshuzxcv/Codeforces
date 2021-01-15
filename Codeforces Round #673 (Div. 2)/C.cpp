#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, j;
    cin >> T;
    while (T--)
    {
        cin >> n;
        ll a[n], gap[n + 1], prev[n + 1], ans[n];
        memset(gap, 0, sizeof(gap));
        memset(prev, -1, sizeof(prev));
        memset(ans, -1, sizeof(ans));
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            gap[a[i]] = max(gap[a[i]], i - prev[a[i]]);
            prev[a[i]] = i;
        }
        for (i = 0; i < n; i++)
            gap[a[i]] = max(gap[a[i]], n - prev[a[i]]);
        for (i = 1; i <= n; i++)
            for (j = gap[i] - 1; j < n; j++)
                if (ans[j] == -1)
                    ans[j] = i;
                else
                    break;
        for (i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}