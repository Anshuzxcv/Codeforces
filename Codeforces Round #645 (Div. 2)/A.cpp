#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        if (n % 2 == 0 || m % 2 == 0)
        {
            cout << (n * m / 2) << endl;
        }
        else
        {
            cout << (((m + 1) / 2) + ((n - 1) * m / 2)) << endl;
        }
    }
}