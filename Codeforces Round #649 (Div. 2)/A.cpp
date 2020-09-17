#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, x, i, *a, sum, last, first;
    cin >> T;
    while (T--)
    {
        vector<int> v;
        cin >> n >> x;
        a = new int[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % x)
                v.push_back(a[i]);
        }
        if (v.size() == 0)
            cout << -1 << endl;
        else
        {
            for (i = 0, sum = 0; i < v.size(); i++)
                sum += v[i];
            if (sum % x == 0)
            {
                for (i = 0, first = n, last = 0; i < n; i++)
                {
                    if (a[i] % x != 0)
                    {
                        if (last < i)
                            last = n - 1 - i;
                        if (first > i)
                            first = i;
                    }
                }
                cout << n - min(first, last) - 1 << endl;
            }
            else
                cout << n << endl;
        }
    }
}