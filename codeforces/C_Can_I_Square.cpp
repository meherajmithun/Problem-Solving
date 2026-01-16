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
    ll i,n,sum=0;
    cin>>n;
    ll a;
    for(i = 0 ; i < n ; i++){
        cin>>a;
        sum += a;
    }
    ll ans = sqrt(sum);
    if((ans * ans) == sum) yes;
    else no;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}