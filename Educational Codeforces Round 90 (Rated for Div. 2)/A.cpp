#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, a, b, c;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        if (a < c)
            cout << 1 << " ";
        else
            cout << -1 << " ";
        if (b * a > c)
            cout << b << endl;
        else
            cout << -1 << endl;
    }
}