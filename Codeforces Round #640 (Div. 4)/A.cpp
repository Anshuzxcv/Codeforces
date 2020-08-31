#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, k, digit, i, temp;
    vector<int> v;
    cin >> T;
    while (T--)
    {
        cin >> n;
        digit = 0;
        while (1)
        {
            if (n / int(pow(10, digit) + 0.5))
                digit++;
            else
                break;
        }
        for (i = digit; i > 0; i--)
        {
            temp = n % int(pow(10, i) + 0.5) - n % int(pow(10, i - 1) + 0.5);
            if (temp)
                v.push_back(temp);
        }
        temp = v.size();
        cout << temp << "\n";
        for (i = 0; i < temp; i++)
            cout << v[i] << " ";
        cout << "\n";
        v.clear();
    }
}