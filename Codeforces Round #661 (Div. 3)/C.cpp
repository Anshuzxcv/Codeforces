#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, j, *a, ans, temp, wt;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (wt = 2, ans = 0; wt <= 100; wt++)
        {
            temp = 0;
            for (i = 0, j = n - 1; i < n && j >= 0;)
            {
                if (i >= j)
                    break;
                if (a[i] + a[j] == wt)
                    temp++, i++, j--;
                else if (a[i] + a[j] < wt)
                    i++;
                else
                    j--;
            }
            if (temp > ans)
                ans = temp;
        }
        cout << ans << endl;
    }
}