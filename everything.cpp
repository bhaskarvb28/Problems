EVERYTHING EVERYWHERE ALL BUT ONE!

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  while(t--){
    
    bool flag = false;
    int n;
    cin >> n;
    
    int sum = 0;
    float num[n];
    for(int i=0; i<n; i++){
      cin >> num[i];
      sum = sum + num[i];
    }
    
    if(sum%n == 0){
      float avg = sum / n;
      for(int i=0; i<n; i++){
        if(num[i] == avg){
          cout << "YES" << endl;
          flag = true;  
          break;
        }
      }
      
      if(!flag){
        cout << "NO" <<endl;
      }
    }
    else{
      cout << "NO" << endl;
    }
  
  }  
 return 0;  
}
-----------------------------------------------------------------------------------------------------------------------------------------------
