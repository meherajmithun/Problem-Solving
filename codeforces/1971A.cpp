/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void loser(){
	int a,b;
	cin>>a>>b;
	cout<<min(a,b)<<" ";
	cout<<max(a,b)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		loser();
	}
}
