/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void loser(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a + b == c){
		cout<<"+"<<endl;
	}
	else {
		cout<<"-"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		loser();
	}
}
