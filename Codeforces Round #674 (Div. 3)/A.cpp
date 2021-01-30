#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll T, n, x, ans;
    cin >> T;
    while (T--) {
        cin >> n >> x;
        n -= 2;
        if (n > 0)
            ans = n % x ? n / x + 2 : n / x + 1;
        else
            ans = 1;
        cout << ans << endl;
    }
}