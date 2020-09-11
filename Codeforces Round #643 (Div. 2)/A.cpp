#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, k, m, temp, mn, mx;
    cin >> T;
    while (T--)
    {
        cin >> a >> k;
        while (k-- > 1)
        {
            temp = a;
            mn = temp % 10;
            mx = temp % 10;
            while (temp > 0)
            {
                if (temp % 10 > mx)
                    mx = temp % 10;
                if (temp % 10 < mn)
                    mn = temp % 10;
                temp /= 10;
            }
            if (mn * mx == 0)
                break;
            a += mn * mx;
        }
        cout << a << endl;
    }
}