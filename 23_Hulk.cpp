#include<bits/stdc++.h>
using namespace std;
		
const int N = 0;
		
int main(){
			

	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		if(i%2 != 0 && i != n){
			cout << "I hate that ";
		}else if(i%2 != 0 && i == n){
			cout << "I hate it ";
		}else if(i%2 == 0 && i != n){
			cout << "I love that ";
		}else if(i%2 == 0 && i == n){
			cout << "I love it ";
		}
	}		
}
