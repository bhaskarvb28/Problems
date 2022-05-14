#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	string s, t;
	cin >> s >> t;
	
	int a = s.size();
	int b = t.size();
	
	if(a==b){
		string ans;
		for(int i=0; i<a; i++){
			if(s[i] == t[b-1]){
				ans = "YES";
			}
			else{
				ans = "NO";
				break;
			}
			b--;
		}
		
		cout <<ans;
	}
	else{
		cout << "NO";
	}
	return 0;
}
