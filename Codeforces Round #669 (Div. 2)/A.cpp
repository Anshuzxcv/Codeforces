#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i, cnt;
    cin >> T;
    while (T--)
    {
        cin >> n;
        bool check[n];
        for (i = 0; i < n; i++)
            check[i] = true;
        a = new ll[n + 1];
        for (i = 0; i < n; i++)
            cin >> a[i];
        a[n] = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
                continue;
            else
            {
                if (a[i + 1] == 1)
                    i++;
                else
                    check[i] = false;
            }
        }
        for (i = 0, cnt = 0; i < n; i++)
            if (check[i])
                cnt++;
        cout << cnt << endl;
        i = 0;
        while (i < n)
        {
            if (check[i])
            {
                cout << a[i] << " ";
            }
            i++;
        }
        cout << endl;
    }
}