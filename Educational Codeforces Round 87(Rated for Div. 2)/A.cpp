#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, a, b, c, d, time;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        if (d >= c && a > b)
            cout << -1 << endl;
        else
        {
            time = b;
            a -= b;
            if (a > 0)
            {
                if (!(a % (c - d)))
                    time += (a / (c - d)) * c;
                else
                    time += (a / (c - d) + 1) * c;
            }
            cout << time << endl;
        }
    }
}