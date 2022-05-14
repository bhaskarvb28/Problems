#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int k, n, w;
	cin >> k >> n >> w;
	
	int ans = 0;
	for(int i=1; i<=w; i++){
		ans = ans + k*i;
	}
	
	if(ans > n){
		cout<<ans - n;
	}
	else{
		cout<<0;
	}
	
	return 0;
}
	
		
