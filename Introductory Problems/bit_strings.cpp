#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    long long int MOD = 1e9+7;
    long long int sum = 1;
    for(int i=0;i<n;i++){
        sum = (sum*2)%MOD;
    }
    cout << sum << endl;
 
 
    return 0;
}
