#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, k, *a, *b, i, temp1, temp2, ans;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a = new int[n];
        b = new int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        temp1 = 0;
        temp2 = n - 1;
        while (k--)
        {
            if (a[temp1] < b[temp2])
            {
                swap(a[temp1], b[temp2]);
                temp1++;
                temp2--;
            }
            else
                break;
        }
        for (i = 0, ans = 0; i < n; i++)
            ans += a[i];
        cout << ans << endl;
    }
}