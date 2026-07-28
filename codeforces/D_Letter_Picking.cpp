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
    string s; cin >> s;
    vector<char>v;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        v.pb(c);
    }
    string A;
    string B;
    A.pb(v[0]);
    B.pb(v[s.size()-1]);
    
    v.pop_back();
    v.erase(v.begin());
    int f = 0;
    int n = v.size() / 2;
    for(int i = 0; i < n; i++){
        B.pb(v[i]);
    }
    for(int i = n; i < v.size(); i++){
        A.pb(v[i]);
    }
    if(A<B) cout<<"Alice"<<endl;
    else if(A > B) cout<<"Bob"<<endl;
    else cout<<"Draw"<<endl;
    
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