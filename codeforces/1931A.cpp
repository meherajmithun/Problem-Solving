/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n;
	for(int i = 97; i < 123; i++){
		for(int j = 97; j < 123; j++){
			for(int k = 97; k < 123; k++){
				x = (i - 96) + (j - 96) + ( k - 96);
				if(x == n){
					cout<<(char)i<<char(j)<<(char)k<<endl;
					break;
				}
				if(x == n) break;
			}
			if(x == n) break;
		}
		if(x == n) break;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
