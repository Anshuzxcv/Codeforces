#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m, sx, sy, i, j, row;
    cin >> m >> n >> sx >> sy;
    ll a[m][n];
    memset(a, 0, sizeof(a));
    for (i = sx, row = 1, j = sy; row <= m; i++, row++)
    {
        if (i == m + 1)
            i = 1;
        while (1)
        {
            if (j == n + 1)
                j = 1;
            // cout << "j = " << j << " n+1 = " << n + 1 << endl;
            if (a[i - 1][j - 1] == 1)
            {
                if (j == 1)
                    j = n;
                else
                    j--;
                break;
            }
            a[i - 1][j - 1] = 1;
            cout << i << " " << j << "\n";
            j++;
        }
    }
}