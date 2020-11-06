#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, b, x, y, n, temp;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> x >> y >> n;
        if (a - min(a - x, n) < b - min(b - y, n))
        {
            temp = a;
            a = b;
            b = temp;
            temp = x;
            x = y;
            y = temp;
        }
        temp = b - y;
        b -= min(temp, n);
        n -= min(temp, n);
        if (n > 0)
            a -= min(a - x, n);
        // cout << a << " " << b << " " << n << endl;
        cout << a * b << endl;
    }
}