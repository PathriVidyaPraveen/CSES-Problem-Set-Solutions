#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l = 1, r = 1e9;

    while (l < r)
    {
        int mid = l + (r - l + 1) / 2;

        cout << "? " << mid << endl;
        cout.flush();

        string s;
        cin >> s;

        if (s == "YES")
            l = mid;
        else
            r = mid - 1;
    }

    cout << "! " << l << endl;
    cout.flush();
}
