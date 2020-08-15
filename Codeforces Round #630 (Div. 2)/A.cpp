#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, a, b, ans;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        ans = a % b;
        if (ans == 0)
            cout << 0 << endl;
        else
            cout << b - ans << endl;
    }
}
