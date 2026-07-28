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
    int n ; cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < 4; j++){
            if(s[j] == '#'){
                v.pb(j+1);
            }
        }
    }
    for(int i = n-1; i >= 0; i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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