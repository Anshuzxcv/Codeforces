#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, count_0, count_1, i;
    char temp;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (i = 0, count_1 = 0, count_0 = 0; i < 2 * n - 1; i++)
        {
            cin >> temp;
            if (temp == '1')
                count_1++;
            else
                count_0++;
        }
        if (count_1 > count_0)
            for (i = 0; i < n; i++)
                cout << 1;
        else
            for (i = 0; i < n; i++)
                cout << 0;
        cout << endl;
    }
}