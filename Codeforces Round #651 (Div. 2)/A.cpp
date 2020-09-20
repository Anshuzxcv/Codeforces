#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n % 2)
            ans = (n - 1) / 2;
        else
            ans = n / 2;
        cout << ans << endl;
    }
}