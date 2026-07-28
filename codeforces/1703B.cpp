/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
    int n,count=0,i;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin() , s.end());
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == s[i+1]){
            count++;
        }
        else {
            count += 2;
        }
    }
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
