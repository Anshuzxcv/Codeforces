#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, x, y, n, ans, modulo;
    cin >> T;
    while (T--)
    {
        cin >> x >> y >> n;
        modulo = n % x;
        if (modulo >= y)
            ans = n - modulo + y;
        else
            ans = n - modulo - x + y;
        cout << ans << endl;
    }
}