/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
	fastIO;
	long long n,k;
	cin >> n >> k;
	if(k <= (n+1)/2){
		cout<< 2 * k - 1<<endl;;
	}
	else {
		cout<<2 * (k-(n+1)/2)<<endl;
	}
}

