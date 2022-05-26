#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
  int n, faces = 0;
  cin >> n;
  string rp;
  
  while(n--){
    cin >> rp;
    
    switch (rp[0])
    {
      case 84:
        faces += 4;
        break;
      case 67:
        faces += 6;
        break;
      case 79:
        faces += 8;
        break;
      case 68:
        faces += 12;
        break;
      case 73:
        faces += 20;
        break;
      default:
        break;
    }
  }
  cout << faces;
}


