#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void ans(string a, string b){
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	
	cout << a.compare(b);
}

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	ans(str1, str2);
}
