#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, k, i, maxm;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a = new ll[n];
        for (i = 0, maxm = INT32_MIN; i < n; i++)
        {
            cin >> a[i];
            if (maxm < a[i])
                maxm = a[i];
        }
        for (i = 0; i < n; i++)
            a[i] = maxm - a[i];
        if (k % 2 == 0)
        {
            for (i = 0, maxm = a[0]; i < n; i++)
                if (maxm < a[i])
                    maxm = a[i];
            for (i = 0; i < n; i++)
                a[i] = maxm - a[i];
        }
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}