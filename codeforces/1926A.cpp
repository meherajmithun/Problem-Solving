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
	int i,count_a=0,count_b=0;
	for(i = 0 ; i < s.size() ; i++){
		if(s[i] == 'A'){
			count_a++;
		}
		else {
			count_b++;
		}
	}
	if(count_a > count_b) return "A";
	else return "B";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
