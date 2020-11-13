#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, a[101], b[101], i, temp, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (i = 0; i < 101; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            cin >> temp;
            if (a[temp] == 0)
                a[temp] = 1;
            else
                b[temp] = 1;
        }
        for (i = 0; i < 101; i++)
            if (a[i] == 0)
            {
                ans = i;
                break;
            }
        if (i == 101)
            ans = 101;
        for (i = 0; i < 101; i++)
            if (b[i] == 0)
            {
                ans += i;
                break;
            }
        if (i == 101)
            ans += 101;
        cout << ans << endl;
    }
}