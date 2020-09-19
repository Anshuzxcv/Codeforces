#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, i, n, *a, count1, count2;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new int[n];
        for (i = 0, count1 = 0, count2 = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 != a[i] % 2)
            {
                if (i % 2 == 0)
                    count1++;
                else
                    count2++;
            }
        }
        if (count1 != count2)
            cout << -1 << endl;
        else
            cout << count1 << endl;
    }
}