/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
	int i,n,u=0,r=0,flag=0;
	cin>>n;
	string s;
	cin>>s;
	for(i = 0 ; i < n ;i++){
		if(s[i] == 'L'){
			r = r - 1;
		}
		else if(s[i] == 'R'){
			r = r + 1;
		}
		else if(s[i] == 'U'){
			u = u + 1;
		}
		else if(s[i] == 'D'){
			u = u - 1;
		}
		if(u == 1){
		    if(r == 1){
			    flag = 1;
		    }
		}
	}
	if(flag == 1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
