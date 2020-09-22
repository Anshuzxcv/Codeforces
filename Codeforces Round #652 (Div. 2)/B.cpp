#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, count_0, count_1, i;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cin >> s;
        for (i = 0, count_0 = 0; i < n; i++)
        {
            if (s[i] == '1')
                break;
            count_0++;
        }
        for (i = n - 1, count_1 = 0; i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            count_1++;
        }
        // cout << count_0 << " " << count_1 << endl;
        if (count_0 + count_1 == n)
            cout << s << "\n";
        else
        {
            for (i = 0; i <= count_0; i++)
                cout << '0';
            for (i = 0; i < count_1; i++)
                cout << '1';
            cout << "\n";
            // count_0++;
            // cout << string("0", count_0) << string("1", count_1) << "\n";
        }
    }
}