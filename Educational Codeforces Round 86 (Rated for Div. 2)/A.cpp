#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, x, y, a, b, amount;
    cin >> t;
    while (t--)
    {
        amount = 0;
        cin >> x >> y >> a >> b;
        if (b < 2 * a)
        {
            if (x <= y)
            {
                amount += b * x;
                amount += (y - x) * a;
            }
            else
            {
                amount += b * y;
                amount += (x - y) * a;
            }
        }
        else
            amount = (x + y) * a;
        cout << amount << endl;
    }
}
