/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int m,n,i,x;
	string s,s2,s3;
	cin>>n>>m;
	vector<string>a;
	for(i = 0 ; i < m ; i++){
		s += 'B';
	}
	for(i = 0 ; i < n ; i++){
		cin>>x;
		s2 = s;
		s2[x-1] = 'A';
		s3 = s;
		s3[m-x] = 'A';
		if(s2 < s3){
			s = s2;
		}
		else {
			s = s3;
		}
		a.push_back(s);
	}
	cout<<*min_element(a.begin() , a.end())<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
