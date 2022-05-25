#include<bits/stdc++.h>
using namespace std;

int main()
{
  int shoes = 0;
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  
  
  if(a==b || a==c || a==d){
    shoes++;
  }
  
  if(b==c || b==d){
    shoes++;
  }
  
  if(c==d){
    shoes++;
  }
  
  cout << shoes;
   
}
