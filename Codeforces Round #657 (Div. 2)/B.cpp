#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, l, r, m, a, b, c, rem, i, temp;
    cin >> T;
    while (T--)
    {
        cin >> l >> r >> m;
        for (i = l, rem = INT32_MAX; i <= r; i++)
        {
            if (m % i < rem)
            {
                rem = m % i;
                a = i;
            }
            if (i - m % i < rem)
            {
                rem = i - m % i;
                a = i;
            }
        }
        if (l <= m)
        {
            temp = m / a;
            // cout << m - temp * a << " " << (temp + 1) * a - m << endl;
            if (m - temp * a > (temp + 1) * a - m)
            {
                c = r;
                b = r - rem;
            }
            else
            {
                c = l;
                b = l + rem;
            }
        }
        else
            a = l, b = l, c = 2 * l - m;
        cout << a << " " << b << " " << c << "\n";
    }
}