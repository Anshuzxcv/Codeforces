#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll singlefn(string s)
{
    ll a[10], i;
    for (i = 0; i < 10; i++)
        a[i] = 0;
    for (i = 0; i < s.length(); i++)
    {
        a[s[i] - 48]++;
    }
    sort(a, a + 10);
    return a[9];
}
ll doublefn(string s)
{
    ll count, maxm = 0, k, temp;
    for (char i = '0'; i < 58; i++)
    {
        for (char j = '0'; j < 58; j++)
        {
            if (i != j)
            {
                for (k = 0, temp = 0, count = 0; k < s.length(); k++)
                {
                    if (s[k] == i && temp == 0)
                    {
                        count++;
                        temp = 1;
                    }
                    else if (s[k] == j && temp == 1)
                    {
                        count++;
                        temp = 0;
                    }
                }
                if (maxm < count)
                    maxm = count;
            }
        }
    }
    return (maxm / 2) * 2;
}
int main()
{
    ll T, i, j, max1, max2;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        max1 = singlefn(s);
        max2 = doublefn(s);
        cout << (s.length() - max(max1, max2)) << "\n";
    }
}