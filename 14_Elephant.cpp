#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int x;
	cin >> x;
	
	if(x<=5){
		cout << 1;
	}
	else{
		int steps = 0;
		while(x>0){
			x = x - 5;
			steps++;
		}
		cout<<steps;
	}

	return 0;
}
	
		
