#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i, *rem, temp, k, max;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a = new ll[n];
        rem = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            temp = a[i] % k;
            if (temp == 0)
                rem[i] = 0;
            else
                rem[i] = k - temp;
        }
        // for (i = 0; i < n; i++)
        //     cout << rem[i] << " ";
        sort(rem, rem + n);
        for (i = 1, max = rem[0], temp = 0; i < n; i++)
        {
            if (rem[i] != 0)
            {
                if (rem[i] == rem[i - 1])
                    temp += k;
                else
                    temp = 0;
                if (max < rem[i] + temp)
                    max = rem[i] + temp;
            }
        }
        if (max != 0)
            max++;
        cout << max << endl;
    }
}