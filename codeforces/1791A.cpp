/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
    int i,flag=0;
    string s = "codeforces";
    char a;
    cin>>a;
    for(i = 0 ; i < 10 ; i++){
        if(s[i] == a){
            flag = 1;
        }
    }
    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
