#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void capitalize(string a){
	if(a[0] >= 'a' && a[0] <= 'z'){
		a[0] = a[0] - 32;
	}
	cout << a;
}

int main(){
	string word;
	cin >> word;
	capitalize(word);
}
