#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i, change;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = n - 1, change = 0; i > 0; i--)
        {
            if (a[i] > a[i - 1] && change == 0)
                change = 1;
            if (a[i] < a[i - 1] && change == 1)
                change = 2;
            if (change == 2)
                break;
        }
        cout << i << "\n";
    }
}