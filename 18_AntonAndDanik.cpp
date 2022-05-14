#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int n;
	cin >> n;
	
	string results;
	cin >> results;
	
	int A = 0, D = 0;
	for(int i=0; i<n; i++){
		if (results[i] == 'A'){
			A++;
		}else if(results[i] == 'D'){
			D++;
		}
	}
	
	if(A > D){
		cout << "Anton"; 
	}else if(D > A){
		cout << "Danik";
	}else{
		cout << "Friendship";
	}
	
	return 0;
}
	
