#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, *b, i;
    cin >> T;
    while (T--)
    {
        bool check = true;
        cin >> n;
        a = new ll[n];
        b = new ll[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (i = 0; i < n; i++)
            if (a[i] != b[i] && a[i] % b[0])
            {
                check = false;
                break;
            }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}