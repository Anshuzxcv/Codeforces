#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, i, *a, temp, maxm, repeat;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new ll[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 1, repeat = 1, maxm = 1, temp = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                temp++;
            else
            {
                if (maxm < temp)
                {
                    maxm = temp;
                    repeat = 1;
                }
                else if (maxm == temp)
                    repeat++;
                temp = 1;
            }
        }
        if (maxm < temp)
        {
            maxm = temp;
            repeat = 1;
        }
        else if (maxm == temp)
            repeat++;

        // cout<<n<<" "<<maxm<<" "<<repeat<<endl;
        if (maxm == 1)
            cout << n << endl;
        else
            cout << (n - (repeat * maxm)) / (maxm - 1) + (repeat - 1) << endl;
    }
}