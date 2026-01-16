/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,count=0,sum = 0;
	string s;
	cin>>n>>s;
	for(i = 0; i < n; i++){
		int x = s[i] - 64;
		sum = sum + x;
		if(sum <= n) count++;
		else break;
	}
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
