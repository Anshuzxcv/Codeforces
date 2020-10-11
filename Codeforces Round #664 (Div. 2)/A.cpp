#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, b, c, d, odd, minm;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        odd = 0;
        if (a % 2)
            odd++;
        if (b % 2)
            odd++;
        if (c % 2)
            odd++;
        if (d % 2)
            odd++;
        minm = min(a, min(b, c));
        if (odd == 0 || odd == 1 || odd == 4)
            cout << "YES\n";
        else if (odd == 2)
            cout << "NO\n";
        else if (odd == 3)
        {
            if (minm == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}