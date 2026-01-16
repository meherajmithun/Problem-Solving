/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
	optimize();
	int n,b,d,cnt=0,sum=0,a;
	cin >> n >> b >> d;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a <= b){
			sum += a;
			if(sum > d){
				sum = 0;
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
