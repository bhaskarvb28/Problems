#include<iostream>
#include<string>
using namespace std;

int main(){
  int matrix[5][5];
  int Row, col;
  int ans = 1;

  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      cin>>matrix[i][j];
      if (matrix[i][j] == 1){
        Row = i+1;
        col = j+1;
        ans = 0;
        break;
      }
    }
    if(ans == 0){
        break;
    }
  }
  
  ans = abs(3-Row) + abs(3-col);
  cout<<ans;
  
  return 0;
}

