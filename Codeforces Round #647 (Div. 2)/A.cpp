#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int a, b, c, e = 0, d;
        cin >> a >> b;
        if (b == a)
        {
            cout << 0 << endl;
        }
        else
        {
            c = a, d = b;
            b = max(c, d);
            a = min(c, d);

            if (b % 2 != 0)
            {
                cout << -1 << endl;
            }
            else if (b % a != 0)
            {
                cout << -1 << endl;
            }
            else
            {
                while (b % 8 == 0 && (b / 8) >= a)
                {
                    b /= 8;
                    e++;
                }
                while (b % 4 == 0 && (b / 4) >= a)
                {
                    b /= 4;
                    e++;
                }
                while (b % 2 == 0 && (b / 2) >= a)
                {
                    b /= 2;
                    e++;
                }

                if (a != b)
                {
                    cout << -1 << endl;
                }
                else
                    cout << e << endl;
            }
        }
    }
    return 0;
}