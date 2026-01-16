/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

int loser(){
	int i,count=0;
	string s1 = "codeforces";
	string s2;
	cin>>s2;
	for(i = 0 ; i < 10 ; i++){
		if(s1[i] != s2[i]){
			count++;
		}
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
