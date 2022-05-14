#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	long long int n;
	cin >> n;
	
	int luck = 0;
	while(n>0){
		int digit = n%10;
		if(digit == 4 || digit == 7){
			luck++;
		}
		n /= 10;
	}
	
	if(luck == 4 || luck == 7){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
	
		
