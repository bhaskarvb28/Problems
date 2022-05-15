#include<bits/stdc++.h>
using namespace std;
		
const int N = 0;
		
int main(){
			
 
	int n;
	cin >> n;
	
	int response;
	string ans = "EASY";
	for(int i=1; i<=n; i++){
		cin >> response;
		if(response == 1){
			ans = "HARD";
			break;
		}
	}
	
	cout << ans;
			
}
