#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
int main(){
	optimize();
	int n; cin >> n;
	int cnt=0;
	while(n){
		if(n&1) cnt++;
		n /= 2;
	}
	cout<<cnt<<endl;
}