/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n,flag = 0;
    string s;
    cin>>n >>s;
    int sz = unique(s.begin() , s.end()) - s.begin();
    for(int i = 0; i < sz; i++){
        for(int j = i+1; j < sz; j++){
            if(s[i] == s[j]){
                flag = 1;
            }
        } 
    }
    if(flag) return "NO";
    else return "YES";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cout<<solve() <<endl;
    }
}