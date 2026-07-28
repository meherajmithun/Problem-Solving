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
	int n,m; cin >> n >> m;
	map<string , string>ip;

	for(int i = 0; i < n; i++){
		string add,v;
		cin >> add >> v;
		ip[v] = add;
	}

	for(int i = 0; i < m; i++){
		string s1, s2;
		cin >> s1 >> s2;
		s2.pop_back();
		string ans = ip[s2];
		cout << s1 << " " << s2<<"; #"<<ans<<endl;
	}
}
