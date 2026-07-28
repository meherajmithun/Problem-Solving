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
    int n ; cin >> n;
    vector<string>v(n);
    int cnt = 0; int ans = 0;
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == 'x') cnt++;
        }
    }
    if(cnt % 2 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}