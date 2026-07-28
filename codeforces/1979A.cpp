/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(i = 0 ; i < n ; i++) cin>>arr[i];
		int count = 1e9;
		for(i = 1 ; i < n ; i++){
			count = min(count,max(arr[i],arr[i-1])-1);
		}
		cout<<count<<endl;
	}
}
