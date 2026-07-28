/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

int solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a == b) return c;
	else if(b == c) return a;
	else return b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
