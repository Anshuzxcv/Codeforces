#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, i, a[3];
    cin >> T;
    while (T--)
    {
        for (i = 0; i < 3; i++)
            cin >> a[i];
        sort(a, a + 3);
        if (a[0] <= a[1] && a[1] == a[2])
        {
            cout << "YES\n";
            cout << a[0] << " " << a[0] << " " << a[1] << "\n";
        }
        else
            cout << "NO\n";
    }
}