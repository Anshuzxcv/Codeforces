#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, *a, i, ans, pointer, diff;
    cin >> T;
    while (T--)
    {
        cin >> n;
        a = new long long int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        // for (i = 0; i < n; i++)
        //    cout << a[i] << " ";
        // cout << endl;
        for (i = 0, ans = 0, pointer = 0; i < n; i++)
        {
            pointer = i + a[i] - 1;
            diff = a[i];
            // cout << "initially " << pointer << " " << diff << endl;
            while (pointer < n && a[pointer] > diff)
            {
                pointer++;
                diff++;
            }
            if (pointer < n)
            {
                i = pointer;
                // cout << pointer << " " << diff << endl;
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }
}