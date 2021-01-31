#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll T, n, root, ans;
    cin >> T;
    while (T--) {
        cin >> n;
        root = sqrt(n);
        if (root * root != n)
            root++;
        ans = n % root ? n / root : n / root - 1;
        ans += root - 1;
        cout << ans << endl;
    }
}