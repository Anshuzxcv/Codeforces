#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, i;
    cin >> T;
    string s;
    while (T--)
    {
        cin >> s;
        cout << s[0];
        for (i = 1; i < s.length(); i += 2)
            cout << s[i];
        cout << endl;
    }
}