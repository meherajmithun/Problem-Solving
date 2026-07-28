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
	int a,b,c;
	cin >> a >> b >> c;
	int s1 = a + b * c;
	int s2 = a * (b + c);
	int s3 = a * b * c;
	int s4 = (a + b) * c;
	int ans = max(s1,max(s2,max(s3,s4)));
	cout<<ans<<endl;
}
