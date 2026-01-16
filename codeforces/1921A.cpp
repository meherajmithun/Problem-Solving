/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a1,b1,a2,b2,a3,b3,a4,b4;
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    int ans = 1;
    if(a1 == a3) ans *= abs(b1 - b3);
    else ans *= abs(a1 - a3);
    if(a2 == a4) ans *= abs(b2 - b4);
    else ans *= abs(a2 - a4);
    return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
