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
        sort(a, a + n);
        for (i = 1; i < n; i++)
            if (a[i] - a[i - 1] > 1)
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