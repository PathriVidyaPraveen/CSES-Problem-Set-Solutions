#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(),s.end());

    vector<string> result;
    do{
        result.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    int len = result.size();
    cout << len << endl;
    for(string t: result){
        cout << t << endl;
    }
    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// string s;
// vector<string> res;
// bool used[20];

// void dfs(string &cur) {
//     if (cur.size() == s.size()) {
//         res.push_back(cur);
//         return;
//     }

//     for (int i = 0; i < s.size(); i++) {
//         if (used[i]) continue;
//         if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

//         used[i] = true;
//         cur.push_back(s[i]);
//         dfs(cur);
//         cur.pop_back();
//         used[i] = false;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> s;
//     sort(s.begin(), s.end());

//     string cur;
//     dfs(cur);

//     cout << res.size() << '\n';
//     for (auto &x : res) cout << x << '\n';
// }
