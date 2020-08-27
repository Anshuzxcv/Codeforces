#include <bits/stdc++.h>
using namespace std;
int calculateSum(int n)
{
    // calculate  and return 2^(n+1) -1
    return (1 << (n + 1)) - 1;
}
int main()
{
    int T, n, k;
    cin >> T;
    while (T--)
    {
        cin >> n;

        for (k = 2;; k++)
        {
            if (n % calculateSum(k - 1) == 0)
                break;
        }
        cout << n / calculateSum(k - 1) << endl;
    }
}