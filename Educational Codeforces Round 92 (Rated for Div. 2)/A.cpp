#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, l, r;
    cin >> T;
    while (T--)
    {
        cin >> l >> r;
        if (r >= 2 * l)
            cout << l << " " << 2 * l << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
}