/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>cnt;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        cnt[s]++;
        if(cnt[s] >=2) cout<<"YES"<<endl;
        else cout<< "NO"<<endl;
    }
}

