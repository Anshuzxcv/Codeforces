#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i, ans, temp;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0, ans = 0, temp = 0; i < n; i++)
        {
            temp += a[i];
            if (temp < 0)
            {
                ans -= temp;
                temp = 0;
            }
        }
        cout << ans << endl;
    }
}