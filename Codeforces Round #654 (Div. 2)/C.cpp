#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, b, n, m;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> n >> m;
        if (a + b < n + m)
            cout << "No\n";
        else if (min(a, b) < m)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}