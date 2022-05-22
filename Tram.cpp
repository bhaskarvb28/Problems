#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    int n;
    cin >> n;
    
    int pp = 0;
    int Np;
    int pl, pe;
    int maxpas = INT_MIN;
    for(int i=1; i<=n; i++){
        cin >> pl >> pe;
        int Np = pp - pl + pe;
        pp = Np;
        maxpas = max(maxpas, pp);
    }
    cout << maxpas;
    return 0;
}
