#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, x, n, m, s;
    cin >> T;
    while (T--)
    {
        cin >> x >> n >> m;
        while (n--)
        {
            if ((x / 2) + 10 < x)
                x = (x / 2) + 10;
            else
                break;
        }
        while (m--)
        {
            x = x - 10;
        }
        if (x > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}