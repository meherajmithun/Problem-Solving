/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

string loser(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a + b == c) return "YES";
	else if(b + c == a) return "YES";
	else if (a + c == b) return "YES";
	else return "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
