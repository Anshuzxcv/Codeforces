#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, minimum, i, count_0, count_1;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        for (i = 0, count_0 = 0, count_1 = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
        }
        // cout << count_0 << " " << count_1 << endl;
        minimum = min(count_0, count_1);
        if (minimum % 2)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
}