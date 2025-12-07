#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,x;
    cin >> n >> x;

    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin >> c[i];
    }

    vector<long long> dp(x+1,1e18);
    dp[0] = 0;
    for(int i=1;i<=x;i++){
        for(int coin: c){
            if(i - coin >= 0){
                dp[i] = min(dp[i-coin]+1,dp[i]);
            }
        }
    }

    if(dp[x] >= 1e18){
        cout << -1 << endl;
    }else{
        cout << dp[x] << endl;
    }





    return 0;
}
