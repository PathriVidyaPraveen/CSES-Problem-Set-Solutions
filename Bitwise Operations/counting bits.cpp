#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    
    long long n;
    cin >> n;
    long long result = 0;
    for(long long k = 0; (1LL << k) <= n;k++){
        long long block = (1LL << k+1);
        long long cycles = (n+1)/block;
        result += cycles* (1LL << k);
        long long rem = (n+1)%block;
        result += max(0LL,rem - (1LL << k));
    }
    cout << result << endl;
}
