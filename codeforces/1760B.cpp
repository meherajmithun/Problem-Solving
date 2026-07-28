/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	int max = arr[0],second_max = arr[0];
	for(i = 0 ; i < n ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	for(i = 0 ; i < n ; i++){
		if((arr[i] > second_max) && (arr[i] != max)){
			second_max = arr[i];
		}
	}
	for(i = 0 ; i < n ; i++){
		if(arr[i] != max) cout<<arr[i] - max<<" ";
		else cout<<arr[i] - second_max<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
