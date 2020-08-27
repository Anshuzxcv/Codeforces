#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m, k, p, temp1;
    cin >> T;
    while (T--)
    {
        cin >> n >> m >> k;
        p = n / k;
        if (p >= m)
            cout << m << endl;
        else
        {
            temp1 = (m - p) / (k - 1);
            if ((m - p) % (k - 1))
                cout << p - temp1 - 1 << endl;
            else
                cout << p - temp1 << endl;
        }
    }
}