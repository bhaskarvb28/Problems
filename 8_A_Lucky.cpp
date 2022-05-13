#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;

  for(int i=1; i<=t; i++){
    int ticket;
    cin>>ticket;
    int lastDigit;
    
    int firAns = 0;
    int lasAns = 0;
    for(int i=1; i<=6; i++){
      lastDigit = ticket%10;
      if(i>3){
        firAns = firAns + lastDigit;
      }
      else{
        lasAns = lasAns + lastDigit;
      }
      ticket /= 10;
    }

    if(firAns == lasAns){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

  return 0;
}

