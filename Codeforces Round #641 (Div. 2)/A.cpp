#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, k, i, j, sd;
    cin >> T;
    while (T--)
    {
        sd = 0;
        cin >> n >> k;
        if (n % 2 == 0)
            sd = 2;
        else
        {
            for (i = 3; i < n / 2; i += 2)
            {
                if (n % i == 0)
                {
                    sd = i;
                    break;
                }
            }
        }
        if (sd == 0)
            sd = n;
        n += sd;
        n += (k - 1) * 2;
        cout << n << endl;
    }
}