#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, i, *a, temp;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0, temp = 1; i < n; i++)
        {
            if (a[i] <= i + 1)
            {
                temp = i + 2;
            }
        }
        cout << temp << endl;
    }
}