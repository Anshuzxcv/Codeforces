#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, k, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        k = (n - 1) / 2;
        ans = k * (k + 1) * (2 * k + 1) * 4 / 3;
        cout << ans << endl;
    }
}