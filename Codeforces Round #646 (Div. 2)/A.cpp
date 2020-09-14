#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll odd_count, even_count, temp, i, n, x, T;
    cin >> T;
    while (T--)
    {
        cin >> n >> x;
        for (i = 0, even_count = 0, odd_count = 0; i < n; i++)
        {
            cin >> temp;
            temp % 2 ? odd_count++ : even_count++;
        }
        if (odd_count == 0)
            cout << "No\n";
        else if (even_count == 0 && x % 2 == 0)
            cout << "No\n";
        else
        {
            if (odd_count % 2)
                temp = even_count + odd_count;
            else
                temp = even_count + odd_count - 1;
            temp >= x ? cout << "Yes\n" : cout << "No\n";
        }
    }
}