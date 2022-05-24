#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
  
  float n;
  cin >> n;
  
  float drink, sum = 0;
  for(int i=1; i<=n; i++){
    cin >> drink;
    sum += drink;
  }
  
  double ans = sum / n;
  cout << ans;
  
  return 0;
}
