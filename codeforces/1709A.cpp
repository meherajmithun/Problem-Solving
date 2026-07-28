/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){
	int x;
	cin >> x;
	int a , b ,c;
	cin >> a >> b >> c;
	if(x == 1) x = a;
	else if(x == 2) x = b;
	else if(x == 3) x = c;
	if(x == 1) x = a;
	else if(x == 2) x = b;
	else if(x == 3) x = c;
	if(x != 0) return "YES";
	else return "NO";
}
int main(){
	optimize();
	int T;
	cin >> T;
	while(T--){
		cout<< solve()<<endl;
	}
}


