#include <bits/stdc++.h>
using namespace std;
void PrimeFactors(int n)
{
    int even_factor = 0, odd_factor = 0;
    vector<int> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        v.push_back(n);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 2)
            odd_factor++;
        else
            even_factor++;
    }
    if (odd_factor == 0)
        cout << "FastestFinger\n";
    else if (odd_factor == 1 && even_factor == 1)
        cout << "FastestFinger\n";
    else
        cout << "Ashishgup\n";
}
int main()
{
    int T, n, i, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n == 1)
            cout << "FastestFinger\n";
        else if (n == 2)
            cout << "Ashishgup\n";
        else if (n % 2)
            cout << "Ashishgup\n";
        else
            PrimeFactors(n);
    }
}