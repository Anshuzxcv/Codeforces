#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, i, cnt, ans;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        for (i = 0, cnt = 0, ans = 0; i < n; i++)
        {
            if (s[i] == '(')
                cnt++;
            else
                cnt--;
            if (cnt == -1)
            {
                cnt = 0;
                ans++;
            }
        }
        cout << ans << endl;
    }
}