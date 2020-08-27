#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m, x, y, i, j, cost;
    char **c;
    cin >> T;
    while (T--)
    {
        cin >> n >> m >> x >> y;
        c = new char *[n];
        for (i = 0; i < n; i++)
            c[i] = new char[m];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> c[i][j];
        cost = 0;
        if (2 * x <= y || m == 1)
        {
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                    if (c[i][j] == '.')
                        cost += x;
        }
        else
        {
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                {
                    if (j != m - 1 && (c[i][j] == '.' && c[i][j + 1] == '.'))
                    {
                        cost += y;
                        // cout << c[i][j] << i << " " << j << " " << cost << endl;
                        j += 1;
                    }
                    else if (c[i][j] == '.')
                    {
                        cost += x;
                        // cout << c[i][j] << i << " " << j << " " << cost << endl;
                    }
                }
        }
        cout << cost << endl;
    }
}