/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include<bits/stdc++.h>
using namespace std;

string solve(int n,int s,int m){
	int a,b;
	vector<int>v1;
	vector<int>v2;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		v1.push_back(a);
		v2.push_back(b);
	}
	if(v1[0] >= s) return "YES";
	else {
		int ans = 0;
		for(int i = 0;i < n; i++){
			ans = ans + v2[i] - v1[i];
		}
		if(ans >= s) return "YES";
		else return "NO";
	}
}
void solve(){
	int n,s,m;
	cin >> n >> s >> m;

	cout<<solve(n,s,m)<<endl;

}
int main(){
	int T;
	cin >> T;
	while(T--){
		solve();
	}
}
