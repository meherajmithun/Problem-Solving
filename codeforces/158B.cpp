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
	int n ; cin >> n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += v[i];
	}
	cout << (ans/4) << endl;
}
