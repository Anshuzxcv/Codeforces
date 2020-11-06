#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, x, y, start, factor, i, temp;
    cin >> T;
    while (T--)
    {
        cin >> n >> x >> y;
        if ((x - y) > n)
        {
            if (y <= n)
                for (i = 1; i <= n; i++)
                    cout << i << " ";
            else
                for (i = y; n > 0; i--, n--)
                    cout << i << " ";
        }
        else
        {
            if (n == 2)
                cout << x << " " << y;
            else
            {
                for (i = n - 1; i > 0; i--)
                    if ((y - x) % i == 0)
                    {
                        factor = i;
                        break;
                    }
                temp = (y - x) / factor;
                start = y - temp * (n - 1);
                if (start <= 0)
                    start = y % temp;
                if (start == 0)
                    start = temp;
                for (i = 0; i < n; i++)
                    cout << start + i * temp << " ";
            }
        }
        cout << endl;
    }
}