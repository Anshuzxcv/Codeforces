#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, i, *prefix_1, *sufix_0, len, ans;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        len = s.length();
        prefix_1 = new ll[len];
        sufix_0 = new ll[len];
        for (i = 1, prefix_1[0] = 0; i < len; i++)
            if (s[i - 1] == '1')
                prefix_1[i] = prefix_1[i - 1] + 1;
            else
                prefix_1[i] = prefix_1[i - 1];
        for (i = len - 2, sufix_0[len - 1] = 0; i >= 0; i--)
            if (s[i + 1] == '0')
                sufix_0[i] = sufix_0[i + 1] + 1;
            else
                sufix_0[i] = sufix_0[i + 1];
        // for (i = 0; i < len; i++)
        //     cout << prefix_1[i] << " ";
        // cout << endl;
        // for (i = 0; i < len; i++)
        //     cout << sufix_0[i] << " ";
        // cout << endl;
        for (i = 0, ans = INT32_MAX; i < len; i++)
            ans = min(ans, min(sufix_0[i] + prefix_1[i], len - prefix_1[i] - sufix_0[i] - 1));
        cout << ans << endl;
    }
}