#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m, i, j;
    cin >> T;
    while (T--)
    {
        bool valid = true;
        cin >> n >> m;
        int a[n][m];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if ((i == 0 || i == n - 1) && (j == 0 || j == m - 1))
                {
                    if (a[i][j] > 2)
                        valid = false;
                    else
                        a[i][j] = 2;
                }
                else if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    if (a[i][j] > 3)
                        valid = false;
                    else
                        a[i][j] = 3;
                }
                else
                {
                    if (a[i][j] > 4)
                        valid = false;
                    else
                        a[i][j] = 4;
                }
            }
        if (valid)
        {
            cout << "YES\n";
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
        }
        else
            cout << "NO\n";
    }
}