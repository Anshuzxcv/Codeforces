#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, k, ans, temp;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        ans = (k * n) / (n - 1);
        temp = ans - (ans / n);
        if ((ans / n) * n == ans)
            ans--;
        cout << ans << "\n";
    }
}