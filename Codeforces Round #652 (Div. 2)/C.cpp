#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, k, *a, *w, i, pointer_to_low, pointer_to_high, ans;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a = new ll[n];
        w = new ll[k];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < k; i++)
            cin >> w[i];
        sort(a, a + n);
        sort(w, w + k, greater<int>());
        ans = a[0] + a[n - k];
        for (i = 0, pointer_to_low = 0, pointer_to_high = n - k; i < k - 1; i++)
        {
            pointer_to_low += w[i] - 1;
            pointer_to_high++;
            if (pointer_to_low > n - 1 - k)
                pointer_to_low = pointer_to_high;
            ans = ans + a[pointer_to_high] + a[pointer_to_low];
            // cout << pointer_to_low << "  " << pointer_to_high << endl;
        }
        cout << ans << endl;
        // for (i = 0; i < k; i++)
        //     cout << w[i] << " ";
    }
}