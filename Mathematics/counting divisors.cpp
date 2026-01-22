#include <bits/stdc++.h>
using namespace std;

int josephus(int n,int k){
    if(n==1){
        return 1;
    }
    if(k <= n/2){
        return 2*k;
    }
    return 2*josephus((n+1)/2,k-n/2) -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int result = 0;
        int i=1;
        for(;i*i<x;i++){
            if(x%i==0){
                result += 2;
            }
        }
        if(i*i==x){
            result+=1;
        }
        cout << result << endl;
    }
    return 0;
}
