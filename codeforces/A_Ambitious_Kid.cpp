#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

int main(){
	optimize();
	int n; cin >> n;
	vector<int>v(n);
	int mn = INT_MAX;
	for(int i=0; i<n; i++){
		int a; cin >> a;
		a = abs(a);
		mn = min(a,mn);
	}
	cout<<mn<<endl;
}