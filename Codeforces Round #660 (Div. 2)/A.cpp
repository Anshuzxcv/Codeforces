#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, n1, n2, n3, n4;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n < 31)
            cout << "NO\n";
        else
        {
            n1 = 6;
            n2 = 10;
            n3 = 14;
            n4 = n - 30;
            if (n == 36)
                n3 = 5, n4 = 15;
            if (n == 40)
                n3 = 9, n4 = 15;
            if (n == 44)
                n3 = 7, n4 = 21;
            cout << "YES\n"
                 << n1 << " " << n2 << " " << n3 << " " << n4 << "\n";
        }
    }
}