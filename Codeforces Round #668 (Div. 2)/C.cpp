#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, k, i, j, ans, cnt0, cnt1;
    char *a, *b;
    cin >> T;
    while (T--)
    {
        bool check = true;
        cin >> n >> k;
        a = new char[n];
        b = new char[k];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < k; i++)
            b[i] = '?';
        for (i = 0; i < n; i += k)
        {
            for (j = 0; j < k && i + j < n; j++)
            {
                if (b[j] == '?')
                    b[j] = a[i + j];
                else if (b[j] != a[i + j] && a[i + j] != '?')
                {
                    check = false;
                    break;
                }
            }
        }
        for (i = 0, cnt0 = 0, cnt1 = 0; i < k; i++)
            if (b[i] == '1')
                cnt1++;
            else if (b[i] == '0')
                cnt0++;
        if (cnt1 > k / 2 || cnt0 > k / 2)
            check = false;
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}