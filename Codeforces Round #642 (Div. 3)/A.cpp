#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, m;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        if (n == 1)
            cout << 0 << "\n";
        else if (n == 2)
            cout << m << "\n";
        else
            cout << 2 * m << "\n";
    }
}