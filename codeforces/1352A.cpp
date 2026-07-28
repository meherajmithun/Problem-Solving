/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
	int a,n,m=1,i,count=0;
	cin>>n;
	int arr[n];
	while(n > 0){
		a = n % 10;
		if(a * m > 0){
			arr[count] = a * m;
			count++;
		}
		m = m * 10;
		n = n / 10;
	}
	cout<<count<<endl;
	for(i = 0 ; i < count ; i++) cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
