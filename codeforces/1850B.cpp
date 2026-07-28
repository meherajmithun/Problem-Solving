/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void loser(){
	int n,a,b,i,result,max = 0;
	cin>>n;
	for(i = 0 ; i < n ; i++){
		cin>>a>>b;
		if(a < 10){
			if(max < b){
				max = b;
				result = i + 1;
			}
		}
	}
	cout<<result<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		loser();
	}
}
