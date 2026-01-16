/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

int loser(){
	int a,sum=0;
	cin>>a;
	for(int i = 1 ; i < a ; i++){
		sum += i;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
