#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, dev, rem, i;
    cin >> T;
    while (T--)
    {
        cin >> n;
        dev = n / 4 + 1;
        rem = n % 4;
        if (rem == 0)
        {
            for (i = 0; i <= n - dev; i++)
                cout << '9';
            for (; i < n; i++)
                cout << '8';
            cout << "\n";
        }
        else
        {
            for (i = 1; i <= n - dev; i++)
                cout << '9';
            cout << '8';
            i++;
            for (; i <= n; i++)
                cout << '8';
            cout << "\n";
        }
    }
}