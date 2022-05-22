#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    string s;
    cin >> s;
    int dischar = 0;
    
    
    int alph[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int n = s.size();
    for(int i=0; i<n; i++){
        int idx = s[i] - 97;
        if(alph[idx] == 0){
            alph[idx] = 1;
            dischar++;  
        }
    }
    
    if(dischar%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
      
    return 0;
}
