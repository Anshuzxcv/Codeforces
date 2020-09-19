#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, k, i, j, ans, len, temp;
    string s;
    cin >> T;
    while (T--)
    {
        vector<ll> v;
        cin >> n >> k >> s;
        v.push_back(-1 * k);
        for (i = 0; i < n; i++)
            if (s[i] == '1')
                v.push_back(i + 1);
        v.push_back(n + k + 1);
        len = v.size();
        for (i = 1, ans = 0; i < len; i++)
        {
            temp = v[i] - v[i - 1] - 1;
            if (temp > 2 * k)
            {
                temp -= 2 * k;
                temp % (k + 1) ? ans += temp / (k + 1) + 1 : ans += temp / (k + 1);
            }
        }
        cout << ans << endl;
    }
}