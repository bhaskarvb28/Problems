#include<bits/stdc++.h>
using namespace std;
		
const int N = 0;
		
int main(){
			
 
	int n, fen_Hei;
	cin >> n >> fen_Hei;
			
	int height;
	int width = 0;
	for(int i=1; i<=n; i++){
		cin >> height;
		if(height > fen_Hei){
			width = width + 2;
		}
		else if(height <= fen_Hei){
			width++;
		}
	}
			
	cout << width;
			
}
