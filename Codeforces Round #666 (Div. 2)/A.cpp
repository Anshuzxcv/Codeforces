#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, j, a[26];
    string *s;
    cin >> T;
    while (T--)
    {
        bool check = true;
        cin >> n;
        s = new string[n];
        for (i = 0; i < n; i++)
            cin >> s[i];
        for (i = 0; i < 26; i++)
            a[i] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < s[i].length(); j++)
                a[s[i][j] - 'a']++;
        for (i = 0; i < 26; i++)
            if (a[i] % n)
            {
                check = false;
                break;
            }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}