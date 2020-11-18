#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, odd, even;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        for (i = 0, odd = 0, even = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] % 2)
                odd++;
            else if (i % 2 && s[i] % 2 == 0)
                even++;
        }
        if (n % 2)
        {
            if (odd > 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            if (even > 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
}