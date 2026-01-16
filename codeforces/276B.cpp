/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s,s1,s2;
	cin >>s;
	s1 = s;
	reverse(s.begin() , s.end());
	if(s == s1) cout<<"First"<<endl;
	else cout<<"Second"<<endl;
}
