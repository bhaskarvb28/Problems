#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
    int n;
    string events;
    
    cin >> n >> events;
    
    int rooms[10] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i=0; i<n; i++){
        if(events[i] == 76){
            for(int j=0; j<10; j++){
                if(rooms[j] == 0){
                    rooms[j] = 1;
                    break;
                }
            }
        }
        
        else if(events[i] == 82){
            for(int k=9; k>=0; k--){
                if(rooms[k] == 0){
                    rooms[k] = 1;
                    break;
                }
            }
        }
        
        else{
            int roNo = events[i] - 48;
            rooms[roNo] = 0;
        }
    }
    
    for(int i=0; i<10; i++){
        cout << rooms[i];
    }
    
    return 0;
}
