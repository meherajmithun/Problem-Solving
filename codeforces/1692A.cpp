/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

int loser(){
	int a,b,c,d,count=0;
	cin>>a>>b>>c>>d;
	if(a < b) count++;
	if(a < c) count++;
	if(a < d) count++;
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
