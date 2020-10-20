#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, x1, x2, y1, y2, z1, z2, ans, temp;
    cin >> T;
    while (T--)
    {
        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        ans = min(z1, y2) * 2;
        z1 -= min(z1, y2);
        temp = (x1 + z1) - z2;
        if (temp < 0)
            ans += temp * 2;
        cout << ans << endl;
    }
}