#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, r, ans;
    cin >> T;
    while (T--)
    {
        cin >> n >> r;
        if (n > r)
            ans = (r * (r + 1)) / 2;
        else
            ans = 1 + ((n - 1) * n) / 2;
        cout << ans << endl;
    }
}