#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, *a, i, ans1, ans2, ans3;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ans1 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        ans2 = a[0] * a[1] * a[n - 3] * a[n - 2] * a[n - 1];
        ans3 = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        cout << max(ans1, max(ans2, ans3)) << endl;
    }
}