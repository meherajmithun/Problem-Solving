/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if(s == "abc") cout<<"YES"<<endl;
    else if(s == "acb") cout<<"YES"<<endl;
    else if(s == "bac") cout<<"YES"<<endl;
    else if(s == "bca") cout<<"NO"<<endl;
    else if(s == "cba") cout<<"YES"<<endl;
    else if(s == "cab") cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
