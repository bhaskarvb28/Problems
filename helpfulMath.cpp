#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    string s;
    cin >> s;
    
    int n = s.size();
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i] == 43 || s[j] == 43){
                continue;
            }
            if(s[j] < s[i]){
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout << s[i];
    }
}
