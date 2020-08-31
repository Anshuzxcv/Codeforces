#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, k, i, temp;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        if (n % 2 != 0 && k % 2 == 0)
            cout << "NO\n";
        else
        {
            if (n % 2 == 0 && k % 2 != 0)
            {
                temp = n / k - (n / k) % 2;
            }
            else if (n % 2 == 0 && k % 2 == 0)
            {
                temp = n / k - (n / k) % 2;
            }
            else if (n % 2 != 0 && k % 2 != 0)
            {
                temp = n / k;
                if (temp % 2 == 0)
                    temp--;
            }
            if (temp < 1)
                temp = 1;
            if (temp % 2 != (n - (k - 1) * temp) % 2)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                for (i = 0; i < k - 1; i++)
                    cout << temp << " ";
                cout << n - (k - 1) * temp << "\n";
            }
        }
    }
}