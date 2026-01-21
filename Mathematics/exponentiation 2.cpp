#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

long long modpow(long long a, long long b) {
    long long result = 1;
    a %= MOD;

    while (b > 0){
        if (b & 1){
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}
long long modpow_exp(long long a, long long b) {
    long long result = 1;
    a %= (MOD-1);

    while (b > 0){
        if (b & 1){
            result = (result * a) % (MOD-1);
        }
        a = (a * a) % (MOD-1);
        b >>= 1;
    }
    return result;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--){
        long long int a,b,c;
        cin >> a >> b >> c;
        long long exponent = modpow_exp(b,c);
        long long result = modpow(a,exponent);

        cout << result << endl;


    }
    return 0;
}
