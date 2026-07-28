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
    ll n  ; cin >> n;
    vector<ll>v(n);
    vector<ll>v2(n);

    for(ll i = 0; i < n; i++){
        cin >> v[i];
        v2[i] = v[i];
    }

    
    sort(v2.begin() , v2.end());

    for(ll i =0; i < n; i++){
        if(v[i] == v2[n-1]){
            cout<<v[i] - v2[n-2]<<" ";
        }
        else{
            cout<<v[i] - v2[n-1]<<" ";
        }
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