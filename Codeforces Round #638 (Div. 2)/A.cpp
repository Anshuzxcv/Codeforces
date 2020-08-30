#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, a, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = n / 2 + 1;
        ans = int(pow(2, a) + 0.5) - 2;
        cout << ans << endl;
    }
}