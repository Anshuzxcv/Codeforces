#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool factor_2_3(ll n, ll *factor_2, ll *factor_3)
{
    *factor_2 = 0, *factor_3 = 0;
    while (n % 2 == 0)
    {
        *factor_2 += 1;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        *factor_3 += 1;
        n /= 3;
    }
    if (n != 1 || *factor_2 > *factor_3)
        return false;
    else
        return true;
}
int main()
{
    ll T, n, i, factor_2, factor_3;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (factor_2_3(n, &factor_2, &factor_3))
        {
            cout << (2 * factor_3 - factor_2) << endl;
        }
        else
            cout << -1 << endl;
    }
}