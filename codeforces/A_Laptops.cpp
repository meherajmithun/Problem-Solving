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
    int n; cin >> n;
    int a,b;
    int f = 0, c = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if( a > b) f = 1;
        else if(a < b) f =1;
        else c = 1;
    }
    if(f == 1) cout<<"Happy Alex"<<endl;
    else if(c == 1) cout<<"Poor Alex"<<endl;
}