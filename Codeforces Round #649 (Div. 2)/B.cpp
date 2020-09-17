#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, *a, i;
    cin >> T;
    while (T--)
    {
        vector<long long int> v;
        cin >> n;
        a = new long long int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        v.push_back(a[0]);
        for (i = 1; i < n - 1; i++)
        {
            if ((a[i] - a[i - 1]) * (a[i + 1] - a[i]) < 0)
                v.push_back(a[i]);
        }
        v.push_back(a[n - 1]);
        cout << v.size() << endl;
        for (i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}