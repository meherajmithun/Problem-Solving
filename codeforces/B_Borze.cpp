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

int main(){
    fastIO;
    string s; cin >> s;
    vector<string>v;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            v.pb(".");
        }
        else if(s[i] == '1'){
            v.pb("-.");
        }
        else if(s[i] == '2'){
            v.pb("--");
        }
    }
    for(auto u : v) cout<<u;

    return 0;
}