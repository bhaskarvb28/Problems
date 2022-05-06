#include<iostream>
using namespace std;

int main(){
  int a;
  cin>>a;

  for(int i; i<=a; i++){
    string word;
    cin>>word;

    if(word.length()>10){
        cout<<*(word.begin())<<(word.length() - 2)<<word.back()<<endl;
    }else{
        cout<<word<<endl;
    }
  }
  return 0;
}
