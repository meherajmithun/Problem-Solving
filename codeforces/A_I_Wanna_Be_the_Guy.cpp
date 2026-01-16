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
    int p; cin >> p;
    set<int>s;
    vector<int>v1;
    for(int i = 0; i < p; i++){
        int a; cin >> a;
        v1.pb(a);
    }
    int q; cin >> q;
    for(int i = 0; i <q; i++){
        int b; cin >> b;
        v1.pb(b);
    }
    for(int i = 0; i < v1.size(); i++){
        s.insert(v1[i]);
    }
    if(s.size() == n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    
}