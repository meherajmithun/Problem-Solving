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
    string s; cin >> s;
    int zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') zero++;
    }
    if (zero==2 && n%2!=0 && s[n/2]=='0' ){
        cout<<"DRAW\n";
    }
    else if (zero==1 || zero%2==0){
        cout<<"BOB\n";
    }
    else{
        cout<<"ALICE\n";
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