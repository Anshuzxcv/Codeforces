#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, b, diff, ans;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        diff = abs(a - b);
        diff % 10 ? ans = diff / 10 + 1 : ans = diff / 10;
        cout << ans << endl;
    }
}