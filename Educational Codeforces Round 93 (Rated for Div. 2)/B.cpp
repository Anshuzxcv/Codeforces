#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, i, temp, len;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        len = s.length();
        vector<ll> v;
        if (s[0] == '1')
            temp = 1;
        else
            temp = 0;
        for (i = 1; i < len; i++)
        {
            if (s[i] != s[i - 1] && s[i] == '0')
            {
                v.push_back(temp);
                temp = 0;
            }
            if (s[i] == '1')
                temp++;
        }
        v.push_back(temp);
        len = v.size();
        sort(v.begin(), v.end());
        for (i = len - 1, temp = 0; i >= 0; i -= 2)
            temp += v[i];
        cout << temp << endl;
    }
}