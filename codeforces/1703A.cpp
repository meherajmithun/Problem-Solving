/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<iostream>
#include<algorithm>
using namespace std;

string solve(){
	string s;
	cin>>s;
	transform(s.begin() , s.end() , s.begin(), ::tolower);
	if(s == "yes") return "YES";
	else return "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}

}
