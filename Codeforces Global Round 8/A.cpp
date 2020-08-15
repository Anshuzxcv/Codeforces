#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, a, b, n, count, temp_min, temp_max;
    cin >> T;
    while (T--)
    {
        count = 0;
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            count++;
            temp_min = min(a, b);
            temp_max = max(a, b);
            temp_min += temp_max;
            a = temp_min;
            b = temp_max;
        }
        cout << count << endl;
    }
}
