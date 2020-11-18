#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, x, i, temp, ans;
    cin >> T;
    while (T--)
    {
        i = 1;
        temp = 1;
        ans = 0;
        cin >> x;
        while (x >= temp)
        {
            ans++;
            i = 1 + i * 2;
            x -= temp;
            temp = (i * (i + 1)) / 2;
        }
        cout << ans << endl;
    }
}