#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s) freq[c - 'A']++;

    int odd = 0, odd_idx = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            odd++;
            odd_idx = i;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    int n = s.size();
    vector<char> res(n);

    int l = 0, r = n - 1;

    for (int i = 0; i < 26; i++) {
        while (freq[i] >= 2) {
            res[l++] = char('A' + i);
            res[r--] = char('A' + i);
            freq[i] -= 2;
        }
    }

    if (odd_idx != -1) {
        res[l] = char('A' + odd_idx);
    }

    for (char c : res) cout << c;
    cout << '\n';

    return 0;
}
