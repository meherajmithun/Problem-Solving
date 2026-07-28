/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3],i,count=0;
	for(i = 0; i < 3; i++){
		cin>>a[i];
	}
	for(i = 0; i < 3; i++){
		if(a[i] == 1) count++;
	}
	cout<<count;
}
