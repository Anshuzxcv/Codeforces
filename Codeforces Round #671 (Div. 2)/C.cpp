#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, x, i, *a, sum;
    cin >> T;
    while (T--)
    {
        bool same = true, found = false;
        cin >> n >> x;
        a = new ll[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == x)
                found = true;
            if (a[i] != x)
                same = false;
        }
        for (i = 0, sum = 0; i < n; i++)
            sum += a[i];
        if (same)
            cout << 0 << endl;
        else
        {
            if (sum == x * n || found)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
}