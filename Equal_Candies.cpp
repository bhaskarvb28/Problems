#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;

  for(int i=1; i<=t; i++){
    int boxes;
    cin>>boxes;

    int candies[boxes];
    for(int i=0; i<boxes; i++){
      cin>>candies[i];
    }

    int min = INT_MAX;
    for(int j=0; j<boxes; j++){
        if(candies[j] <= min){
          min = candies[j];
        }
    }

    int ans = 0;
    for(int k=0; k<boxes; k++){
      if(candies[k] > min){
        ans = ans + (candies[k] - min);
      }
    }

    cout<<ans<<endl;
  
  }
  return 0;
}

