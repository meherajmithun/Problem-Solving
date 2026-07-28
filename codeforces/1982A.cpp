/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;
void loser(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a > b){
	    swap(a , b);
	    swap(c , d);
	}
	if(c>=d) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		loser();
	}

}
