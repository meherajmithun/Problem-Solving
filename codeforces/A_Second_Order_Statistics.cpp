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
    vector<int>v(n);
    set<int>s;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        s.insert(a);
    }
    if(s.size() < 2){
        cout<<"NO"<<endl;
        return 0;
    }
    else {
        cout<<*(++s.begin())<<endl;
    }
}