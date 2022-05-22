#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;   
        cin >> n;
        
        int t1 = n-2;
        int t2 = n;
        
        cout << 2 << endl;
        for(int i=1; i<n; i++){
            if(t1==0){
                t1++;
            }
            cout << t1 << " " << t2 << endl;
            if(i < 2){
                t1 = t1+1;
                t2 = t2 - 1;
            }
            else if(i==2){
                t1 = t1 - 2;
            }
            else{
                t1--;
                t2--;
            }
        }
    }
}
