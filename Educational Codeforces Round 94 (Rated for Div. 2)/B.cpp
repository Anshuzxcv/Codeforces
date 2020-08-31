#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, p, f, cnt_s, cnt_w, s, w, i, temp, ans;
    cin >> T;
    while (T--)
    {
        cin >> p >> f;
        cin >> cnt_s >> cnt_w;
        cin >> s >> w;
        if (s > w)
        {
            temp = s;
            s = w;
            w = temp;
            temp = cnt_s;
            cnt_s = cnt_w;
            cnt_w = temp;
        }
        if (p / s + f / s > cnt_s)
            for (i = 0, ans = 0; i <= cnt_s; i++)
            {
                if (p - i * s >= 0 && f - (cnt_s - i) * s >= 0)
                {
                    temp = (p - i * s) / w + (f - (cnt_s - i) * s) / w + cnt_s;
                    if (temp > ans)
                        ans = temp;
                }
            }
        else
        {
            ans = p / s + f / s;
        }
        if (ans > cnt_s + cnt_w)
            ans = cnt_s + cnt_w;
        cout << ans << endl;
    }
}