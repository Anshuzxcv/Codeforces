#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n % 4)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}