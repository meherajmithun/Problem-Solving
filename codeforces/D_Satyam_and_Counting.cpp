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
    vector<int>v1(n);
    vector<int>v2(n);

    for(int i = 0; i < n; i++){
        cin >> v1[i] >> v2[i];
    }
    for(int i = 0; i < n; i++){
        if(v1[i] == 0 and v2[i] == 0 ){
            cout<<0<<endl;
            return ;
        }
    }
    cout<<n-1<<endl;
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