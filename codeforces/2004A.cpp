/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){
	int n;
	cin >> n;
	vector<int>v(n);

	for(int i = 0; i < n; i++) cin >> v[i];

	if(n > 2) return "NO";

	else {

		int ans = v[1] - v[0];

		if(ans > 1) return "YES";
		else return "NO";
	}
}
int main(){
	fastIO;
	int T;
	cin >> T;
	while(T--){
		cout<<solve()<<endl;
	}
}
