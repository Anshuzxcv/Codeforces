#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll T, n, m, i, j, ans, m1, m2, m3, m4;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        ll a[n][m];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> a[i][j];
        for (i = 0, ans = 0; i < (n + 1) / 2; i++)
            for (j = 0; j < (m + 1) / 2; j++) {
                if (i != n - 1 - i && j != m - 1 - j) {
                    m1 = abs(a[n - 1 - i][j] - a[i][j]) + abs(a[i][m - 1 - j] - a[i][j]) + abs(a[n - 1 - i][m - 1 - j] - a[i][j]);
                    m2 = abs(a[i][j] - a[n - 1 - i][j]) + abs(a[n - 1 - i][m - 1 - j] - a[n - 1 - i][j]) + abs(a[i][m - 1 - j] - a[n - 1 - i][j]);
                    m3 = abs(a[i][j] - a[n - 1 - i][m - 1 - j]) + abs(a[n - 1 - i][j] - a[n - 1 - i][m - 1 - j]) + abs(a[i][m - 1 - j] - a[n - 1 - i][m - 1 - j]);
                    m4 = abs(a[i][j] - a[i][m - 1 - j]) + abs(a[n - 1 - i][j] - a[i][m - 1 - j]) + abs(a[n - 1 - i][m - 1 - j] - a[i][m - 1 - j]);
                    ans += min(m1, min(m2, min(m3, m4)));
                } else if (i != n - 1 - i)
                    ans += abs(a[i][j] - a[n - 1 - i][j]);
                else if (j != m - 1 - j)
                    ans += abs(a[i][j] - a[i][m - 1 - j]);
            }
        cout << ans << endl;
    }
}