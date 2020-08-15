#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m, i, j;
    char **a;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        a = new char *[n];
        for (i = 0; i < n; i++)
            a[i] = new char[m];
        if (m % 2 == 0 && n % 2 == 0)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                        a[i][j] = 'W';
                    else
                        a[i][j] = 'B';
                }
            }
            a[n - 1][m - 1] = 'B';
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                        a[i][j] = 'B';
                    else
                        a[i][j] = 'W';
                }
            }
            a[n - 1][m - 1] = 'B';
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}