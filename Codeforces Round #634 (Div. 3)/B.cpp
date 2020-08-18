#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, a, b, i, j;
    cin >> T;
    while (T--)
    {
        cin >> n >> a >> b;
        for (i = 0, j = 0; i < n; i++, j++)
        {
            if (j == b)
                j = 0;
            printf("%c", j + 97);
        }
        printf("\n");
    }
}