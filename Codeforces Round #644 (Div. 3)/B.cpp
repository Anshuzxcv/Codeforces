#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, *s, i, diff;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = new int[n];
        for (i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n);
        for (i = 0, diff = INT32_MAX; i < n - 1; i++)
            if (s[i + 1] - s[i] < diff)
                diff = s[i + 1] - s[i];
        cout << diff << endl;
    }
}