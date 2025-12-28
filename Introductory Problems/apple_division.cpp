#include<bits/stdc++.h>
using namespace std;



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }

    long long total = 0;
    for(int i=0;i<n;i++){
        total = total + p[i];
    }
    long long result = LLONG_MAX;
    for(int mask = 0;mask < (1<<n);mask++){
        long long sum = 0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                sum += p[i];
            }
        }
        result = min(result,abs(total-2*sum));
      }

      cout << result << endl;

    
    return 0;
}
