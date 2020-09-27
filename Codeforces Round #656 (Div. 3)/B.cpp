#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i;
    cin >> T;
    while (T--)
    {
        cin >> n;
        bool check[51];
        for (i = 0; i < 51; i++)
            check[i] = false;
        a = new ll[2 * n];
        for (i = 0; i < 2 * n; i++)
            cin >> a[i];
        for (i = 0; i < 2 * n; i++)
        {
            if (check[a[i]] == false)
            {
                cout << a[i] << " ";
                check[a[i]] = true;
            }
        }
        cout << "\n";
    }
}