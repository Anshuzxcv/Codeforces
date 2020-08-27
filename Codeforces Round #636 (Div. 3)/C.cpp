#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, *a, i, pg, ng, prev, sum;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new long long int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        pg = 0;
        ng = LLONG_MIN;
        prev = 0;
        sum = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] * prev < 0)
                sum += prev;
            if (a[i] > pg && a[i] > 0)
            {
                pg = a[i];
                ng = LLONG_MIN;
                prev = pg;
            }
            if (a[i] > ng && a[i] < 0)
            {
                ng = a[i];
                pg = 0;
                prev = ng;
            }
        }
        sum += prev;
        cout << sum << endl;
    }
}