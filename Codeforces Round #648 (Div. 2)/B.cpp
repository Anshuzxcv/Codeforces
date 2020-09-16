#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, *a, *b, *sorted_a, i, ab, bb;
    cin >> T;
    while (T--)
    {
        bool is_sorted;
        cin >> n;
        a = new int[n];
        b = new int[n];
        sorted_a = new int[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sorted_a[i] = a[i];
        }
        for (i = 0; i < n; i++)
            cin >> b[i];
        sort(sorted_a, sorted_a + n);
        for (i = 0, is_sorted = true; i < n; i++)
        {
            if (a[i] != sorted_a[i])
            {
                is_sorted = false;
                break;
            }
        }
        // for (i = 0; i < n; i++)
        //     cout << b[i] << " ";
        // cout << endl;
        if (!is_sorted)
        {
            ab = 0, bb = 0;
            for (int j = 0; j < n; j++)
            {
                // cout << b[j] << endl;
                if (b[j] == 0)
                    bb = 1;
                if (b[j] == 1)
                    ab = 1;
            }
        }
        if (is_sorted || (ab == 1 && bb == 1))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}