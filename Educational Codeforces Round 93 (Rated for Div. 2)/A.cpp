#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, i, n, *a;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (a[0] + a[1] > a[n - 1])
            cout << -1 << endl;
        else
            cout << 1 << " " << 2 << " " << n << endl;
    }
}