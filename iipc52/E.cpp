/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

string solve(int n, string s, int x){
	char a,b;
	while(x--){
		cin>>a>>b;
		for(int j = 0; j < n; j++){
			if(s[j] == a) s[j] = b;
		}
	}
	return s;
}
int main(){
	int n,i,x,j;
	string s;
	char a,b;
	cin>>n>>s>>x;
	cout<<solve(n,s,x);
}
