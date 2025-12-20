#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int zeros = 0;
    int term = n/5;
    int den = 5;
    while(term != 0){
        zeros += term;
        den = den*5;
        term = n/den;
        
    }

    cout << zeros << endl;


    return 0;
}
