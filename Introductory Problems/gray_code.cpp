#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> gray;
    gray.push_back("0");
    gray.push_back("1");

    for(int i=2;i<=n;i++){
        int sizee = gray.size();
        for(int j = sizee-1;j>=0;j--){
            gray.push_back(gray[j]);
        }
        for(int j=0;j<sizee;j++){
            gray[j] = "0" + gray[j];
        }
        for(int j=sizee;j<2*sizee;j++){
            gray[j] = "1" + gray[j];
        }
    }

    for(auto &s: gray){
        cout << s << endl;
    }

    return 0;
}
