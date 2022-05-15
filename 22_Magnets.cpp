#include<bits/stdc++.h>
using namespace std;
		
const int N = 0;
		
int main(){
			

	int n;
	cin >> n;
	
	int pos;
	int groups = 0;
	int prev_pos = 0;
	for(int i=1; i<=n; i++){
		cin >> pos;
		if(pos != prev_pos){
			groups++;
		}
		prev_pos = pos;	
	}
	
	cout << groups;
	return 0;		
}
