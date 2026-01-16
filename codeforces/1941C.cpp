/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n,i,count=0;
	string s;
	cin>>n>>s;
	for(i = 0; i < n; i++){
		if(s.substr(i,3) == "map"|| s.substr(i,3) == "pie") count++;
		if(i <= n - 5 && s.substr(i,5) == "mapie") count--;
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
