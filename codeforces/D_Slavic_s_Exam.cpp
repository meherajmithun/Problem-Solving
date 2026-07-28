/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

void solve(){
    string s; cin >>s;
    string t; cin >> t;
    int cnt = 0;
    int l=0;
    for(int i = 0; i < s.size() and l < t.size(); i++){
        if(s[i] == t[l]){
            s[i] = t[l];
            l++;
        }
        else if(s[i] == '?'){
            s[i] = t[l];
            l++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '?'){
            s[i] = 'a';
        }
    }
    //cout<<l<<endl;
    if(l == t.size()){
        cout<<"YES"<<endl<<s<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve();
    }
    return 0;
}