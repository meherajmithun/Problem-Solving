/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

string loser(){
	string s;
	cin>>s;
	int i,sum = 0;
	for(i = 0 ; i < 3 ; i++){
		sum = sum + s[i];
	}
	int a = sum ;

	sum = 0;
	for(i = 3 ; i < 6 ; i++){
		sum = sum + s[i];
	}
	int b = sum;
	if(a == b){
		return "YES";
	}
	else {
		return "NO";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cout<<loser()<<endl;
	}
}
