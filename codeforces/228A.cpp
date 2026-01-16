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
	vector<int>v(4);
	for(int i = 0; i < 4; i++) cin >> v[i];
	sort(v.begin() , v.end());

	int sz = unique(v.begin() , v.end()) - v.begin();
	cout<<4-sz<<endl;
}


