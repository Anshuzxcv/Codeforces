#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, a, b, c, d, n;
    cin >> T;
    while (T--)
    {
        cin >> n >> a >> b >> c >> d;
        if ((a - b) * n <= c + d && (a + b) * n >= c - d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}