/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,count=0;
	cin>>n>>a;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] + a <= 5) count++;
	}
	cout<< count/2;
}
