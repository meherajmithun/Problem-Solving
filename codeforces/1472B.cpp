/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
	int m,n,a,i;
	cin>>n;
	double sum = 0;
	for( i = 0 ; i < n ; i++){
		cin>>a;
		sum += a;
	}
	sum = sum/2;
	if(sum == (int)sum){
	    if(n % 2 == 0){
	        cout<<"YES"<<endl;

	    }
	    else {
	        cout<<"NO"<<endl;
	    }
    }
	else cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
