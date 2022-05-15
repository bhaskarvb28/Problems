
#include<bits/stdc++.h>
using namespace std;
		
const int N = 0;
		
int main(){
			
 
	int n;
	cin >> n;
	
	int p, q;
	int rooms = 0;
	for(int i=1; i<=n; i++){
		cin >> p >> q;
		if( q-p >= 2){
			rooms++;
		}
	}
	
	cout << rooms;
			
}
