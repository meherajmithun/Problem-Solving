/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

string solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a < b) && (b < c)) return "STAIR";
	else if((a < b)&&  (b > c)) return "PEAK";
	else return "NONE";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
