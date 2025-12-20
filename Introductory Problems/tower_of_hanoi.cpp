#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> moves;

void hanoi(int n, int from, int aux, int to) {
    if (n == 0) return;

    hanoi(n - 1, from, to, aux);
    moves.push_back({from, to});
    hanoi(n - 1, aux, from, to);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    hanoi(n, 1, 2, 3);

    cout << moves.size() << '\n';
    for (auto &p : moves) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}
