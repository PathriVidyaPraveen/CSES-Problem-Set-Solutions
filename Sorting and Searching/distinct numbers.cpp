#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    int count = 1;
    for(int i=0;i<n-1;i++){
        if(x[i] != x[i+1]){
            count++;
        }
    }
    cout << count << endl;
}
