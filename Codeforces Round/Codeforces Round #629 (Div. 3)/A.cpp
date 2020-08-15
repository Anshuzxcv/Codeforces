#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, a, b, c, d, x, y, x1, y1, x2, y2;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if (x2 == x1 && (a != 0 || b != 0))
            cout << "NO" << endl;
        else if (y2 == y1 && (c != 0 || d != 0))
            cout << "NO" << endl;
        else if (a >= b && c >= d)
        {
            if (x - x1 >= a - b && y - y1 >= c - d)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (a >= b && c < d)
        {
            if (x - x1 >= a - b && y2 - y >= d - c)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (a < b && c >= d)
        {
            if (x2 - x >= b - a && y - y1 >= c - d)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (x2 - x >= b - a && y2 - y >= d - c)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}