#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector<string>v(4);
	for(int i = 0; i < 4; i++){
		v[i] = s[i];
	}
	sort(v.begin() , v.end());
	int x = unique(v.begin() , v.end()) - v.begin();
	cout<<x<<endl;

}
