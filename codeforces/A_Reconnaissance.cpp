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
    int n,m; cin >> n >> m;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(abs(v[i]-v[j]) <= m and i != j) cnt++;
        }
    }
    cout<<cnt<<endl;
}