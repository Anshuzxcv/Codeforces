#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        if (k >= n)
            cout << k - n << endl;
        else
        {
            if (k % 2 == 1)
            {
                if (n % 2 == 1)
                    cout << 0 << endl;
                else
                    cout << 1 << endl;
            }
            else
            {
                if (n % 2 == 1)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
            }
        }
    }
}