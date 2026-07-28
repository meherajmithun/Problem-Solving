/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<algorithm>
using namespace std;

string loser(){
	int n;
	cin>>n;
	int arr[n],i,count=0;
	for(i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(i = 1 ; i < n ; i++){
		if(arr[i-1] < arr[i]){
			count++;
		}
	}
	if(count == n-1) return "YES";
	else return "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<loser()<<endl;
	}
}
