#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int con = (a+b)%3;
        if(con == 0){
            if(b <= 2*a && a <= 2*b){
            cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }


    return 0;
}

