#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
  
  long long int n;
  cin >> n;
  
  long long int ans=n/2;
  
  if(n%2==0){
    cout << ans << endl;
  }
  else{
    cout << -(ans+1) << endl;
  }
  
  return 0;
}
