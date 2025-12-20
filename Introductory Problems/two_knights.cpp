
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin >> n;
    for(long long k=1;k<=n;k++){
        long long result = 0;
        if(k==1){
            cout << result << endl;
            continue;
        }
        long long total = (k*k)*(k*k-1)/2;
        long long removed = 4*(k-1)*(k-2);
        result = total - removed;
        cout << result << endl;
    }
 
    return 0;
}
