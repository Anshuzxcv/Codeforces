#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll digitCount(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    ll T, n, s, i, ans, temp, temp1;
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        ans = 0;
        for (i = 1; i <= 18; i++)
        {
            if (digitCount(n) <= s)
                break;
            temp1 = pow(10, i);
            temp = temp1 - n % temp1;
            ans += temp;
            n += temp;
        }
        if (n % 10 == 9 && s == 1)
            ans++;
        cout << ans << endl;
    }
}