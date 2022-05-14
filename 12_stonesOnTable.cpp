#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n;
	cin >> n;
	
	string colour;
	cin >> colour;
	
	int count = 0;
	for(int i=0; i<n; i++){
		if(i > 0){
			if(colour[i] == colour[i-1]){
				count++;
			}
		}
	}
	
	cout << count;
	return 0;
}
	
