#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    
    int year;
    cin >> year;
    year++;
    
    while(true){
        int digits[10] = {0,0,0,0,0,0,0,0,0,0};
        int n = year;
        bool dy = true;
        for(int i=1; i<=4; i++){
            int num = n%10;
            if(digits[num] == 0){
                digits[num] = 1;
            }
            else{
                year++;
                dy = false;
                break;
            } 
            n/=10; 
        }
        
        if(dy){
            cout << year;
            break;
        }
    }
}
