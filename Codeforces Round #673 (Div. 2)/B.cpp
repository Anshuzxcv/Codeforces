#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T, n, t, *a, *p, i, type;
    cin >> T;
    while (T--)
    {
        cin >> n >> t;
        a = new ll[n];
        p = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (i = 0, type = 1; i < n; i++)
        {
            if (a[i] * 2 != t)
            {
                if (mp[t - a[i]] == 0)
                {
                    p[i] = 1;
                    mp[a[i]] = 1;
                }
                else
                {
                    p[i] = 0;
                    mp[a[i]] = 0;
                }
            }
            else
            {
                if (type == 1)
                {
                    p[i] = 0;
                    type = 0;
                }
                else
                {
                    p[i] = 1;
                    type = 1;
                }
            }
        }
        for (i = 0; i < n; i++)
            cout << p[i] << " ";
        cout << endl;
    }
}