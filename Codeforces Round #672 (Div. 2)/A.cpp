#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, *a;
    cin >> T;
    while (T--)
    {
        bool check = true;
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
            if (a[i] <= a[i + 1])
            {
                check = false;
                break;
            }
        if (check)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}