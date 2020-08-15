#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, *a, *b, x, y, i1, i2, i, ans;
    cin >> T;
    while (T--)
    {
        x = 0;
        y = 0;
        ans = 0;
        cin >> n;
        a = new int[n];
        b = new int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    if (x == 0)
                    {
                        ans = 1;
                        break;
                    }
                }
                if (a[i] < b[i])
                {
                    if (y == 0)
                    {
                        ans = 1;
                        break;
                    }
                }
            }
            if (a[i] == -1)
                x = 1;
            if (a[i] == 1)
                y = 1;
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
