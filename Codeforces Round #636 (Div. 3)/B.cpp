#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, i;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (i = 0; i < n / 2; i++)
                cout << 2 * (i + 1) << " ";
            for (i = 1; i < n / 2; i++)
                cout << 2 * i - 1 << " ";
            cout << 3 * i - 1;
            cout << endl;
        }
    }
}