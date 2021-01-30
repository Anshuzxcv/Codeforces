#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll T, n, m, a, b, c, d, case1, i;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        for (i = 1, case1 = 0; i <= n; i++) {
            cin >> a >> b >> c >> d;
            if (b == c)
                case1++;
        }
        if (m % 2)
            cout << "NO\n";
        else {
            if (case1 > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}