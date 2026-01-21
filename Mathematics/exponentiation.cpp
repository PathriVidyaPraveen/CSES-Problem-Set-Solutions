#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    const long long int MOD = 1e9+7;
    while(n--){
        long long int a,b;
        cin >> a >> b;
        if(a==0 && b ==0){
            cout << 1 << endl;
            continue;
        }
        a = a % MOD;
        long long int result = 1;
        while(b > 0){
            if(b & 1){
                result = (result*a)%MOD;
                
            }
            a = (a*a)%MOD;
            b = b >> 1;

        }

        cout << result << endl;


    }
    return 0;
}
