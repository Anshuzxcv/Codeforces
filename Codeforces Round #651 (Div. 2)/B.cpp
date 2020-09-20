#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, *a, i, even_count, odd_count, even_minus, odd_minus, j;
    cin >> T;
    while (T--)
    {
        bool *b;
        cin >> n;
        a = new int[2 * n];
        b = new bool[2 * n];
        for (i = 0, even_count = 0, odd_count = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            b[i] = 1;
            if (a[i] % 2)
                odd_count++;
            else
                even_count++;
        }
        even_minus = 0, odd_minus = 0;
        if (odd_count % 2)
        {
            even_minus = 1;
            odd_minus = 1;
        }
        else
        {
            if (even_count > 2)
                even_minus = 2;
            else
                odd_minus = 2;
        }
        // cout << even_count << " " << odd_count << endl;
        for (i = 0; i < 2 * n && odd_minus; i++)
        {
            if (a[i] % 2)
            {
                b[i] = 0;
                odd_minus--;
            }
        }
        for (i = 0; i < 2 * n && even_minus; i++)
        {
            if (a[i] % 2 == 0)
            {
                b[i] = 0;
                even_minus--;
            }
        }
        for (i = 0; i < 2 * n; i++)
        {
            if (b[i])
            {
                for (j = i + 1; j < 2 * n; j++)
                {
                    if (b[j] && (a[i] % 2 == a[j] % 2))
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        b[i] = 0;
                        b[j] = 0;
                        break;
                    }
                }
            }
        }
        // for (i = 0; i < 2 * n; i++)
        //     cout << a[i] << " ";
        // cout << endl;
        // for (i = 0; i < 2 * n; i++)
        //     cout << b[i] << " ";
        // cout << endl;
    }
}