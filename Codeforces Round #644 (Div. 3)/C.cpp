#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, *s, i, diff, temp1, temp2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = new int[n];
        for (i = 0; i < n; i++)
            cin >> s[i];
        for (i = 0, temp1 = 0; i < n; i++)
        {
            if (s[i] % 2 == 0)
                temp1++;
        }
        if (temp1 % 2 == 0)
            cout << "YES\n";
        else
        {
            sort(s, s + n);
            for (i = 0, temp2 = 0; i < n - 1; i++)
            {
                if (s[i + 1] - s[i] == 1)
                    temp2 = 1;
            }
            if (temp2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}