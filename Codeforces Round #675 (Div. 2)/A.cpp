#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll T, a, b, c;
    cin >> T;
    while (T--) {
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) << endl;
    }
}