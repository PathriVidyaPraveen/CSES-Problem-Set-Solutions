#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long k = max(y, x);
        long long base = k * k;

        if (k % 2 == 0) {
            // even layer
            if (y == k)
                cout << base - (x - 1) << '\n';
            else
                cout << base - (2 * k - y - 1) << '\n';
        } else {
            // odd layer
            if (x == k)
                cout << base - (y - 1) << '\n';
            else
                cout << base - (2 * k - x - 1) << '\n';
        }
    }

    return 0;
}
