#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
  int n, t;
  string s;
  
  cin >> n >> t;
  cin >> s;
  
  while(t--){
    for(int i=0; i<n; i++){
      if(s[i] == 66 && s[i+1] == 71){
          s[i] = 71;
          s[i+1] = 66;
          i++;
      }
    }
  }
  
  cout << s;
  
  return 0;
}
    
