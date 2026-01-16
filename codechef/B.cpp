/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,c;
	cin>>a>>b>>c;
	for(int i = 1; i <= a ; i++){
		if(i * b > c){
            return a-(i-1);
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}



vector ta re sort kore then unique kore check korlam.if unique == x Good and so on
int sz = unique(v.begin() , v.end())-v.begin();