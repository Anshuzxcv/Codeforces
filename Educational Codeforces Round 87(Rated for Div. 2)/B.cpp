#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, count1, count2, count3, temp1, p1, p2, p3, temp2, temp3, len, i, min;
    string c;
    cin >> T;
    while (T--)
    {
        cin >> c;
        len = c.length();
        count1 = 0;
        count2 = 0;
        count3 = 0;
        p1 = INT32_MIN;
        p2 = INT32_MIN;
        p3 = INT32_MIN;
        for (i = 0, min = INT32_MAX; i < len; i++)
        {
            if (c[i] == '1')
            {
                temp1 = 1;
                count1 = 1;
                p1 = i;
            }
            else if (c[i] == '2' && (temp1 == 1 || temp1 == 3))
            {
                temp1 = 2;
                count1++;
            }
            else if (c[i] == '3' && (temp1 == 1 || temp1 == 2))
            {
                temp1 = 3;
                count1++;
            }
            if (c[i] == '2')
            {
                temp2 = 2;
                count2 = 1;
                p2 = i;
            }
            else if (c[i] == '1' && (temp2 == 2 || temp2 == 3))
            {
                temp2 = 1;
                count2++;
            }
            else if (c[i] == '3' && (temp2 == 1 || temp2 == 2))
            {
                temp2 = 3;
                count2++;
            }
            if (c[i] == '3')
            {
                temp3 = 3;
                count3 = 1;
                p3 = i;
            }
            else if (c[i] == '1' && (temp3 == 2 || temp3 == 3))
            {
                temp3 = 1;
                count3++;
            }
            else if (c[i] == '2' && (temp3 == 1 || temp3 == 3))
            {
                temp3 = 2;
                count3++;
            }
            if (count1 == 3 && min > (i - p1 + 1))
                min = i - p1 + 1;
            if (count2 == 3 && min > (i - p2 + 1))
                min = i - p2 + 1;
            if (count3 == 3 && min > (i - p3 + 1))
                min = i - p3 + 1;
        }
        if (min == INT32_MAX)
            cout << 0 << endl;
        else
            cout << min << endl;
    }
}