/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;
void solve(int n){
	int a,b,c,sum=0;
	while(n--){
		cin>>a>>b>>c;
		sum = sum + b + c;
	}
	(sum == 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
	int n;
	cin>>n;
	solve(n);
}
