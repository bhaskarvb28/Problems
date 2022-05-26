#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >>n;
  
  int mx = INT_MIN;
  int mi = INT_MAX;
  
  int max_idx, min_idx;
  
  int sol[n];
  for(int i=0; i<n; i++){
    cin >> sol[i];
    
    if(sol[i] > mx){
      mx = sol[i];
      max_idx = i;
    }
    
    if(sol[i] <= mi){
      mi = sol[i];
      min_idx = i;
    }
  }
  
  if(max_idx >= min_idx){
    min_idx = (n-1) - min_idx;
    cout << (max_idx+min_idx) - 1 << endl;
  }
  else{
    min_idx = (n-1) - min_idx;
    cout << (max_idx+min_idx) << endl;
  }
 return 0;  
}
