#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, *a, i, ans = 0;
    cin >> n;
    a = new ll[n];
    vector<ll> v;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 0; i < n / 2; i++)
    {
        v.push_back(a[n - i - 1]);
        v.push_back(a[i]);
    }
    if (n % 2)
        v.push_back(a[n / 2]);
    for (i = 1; i < n - 1; i++)
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
            ans++;
    cout << ans << endl;
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}