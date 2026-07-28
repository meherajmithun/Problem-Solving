#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();
    int n; cin >> n;
    vector<int>v(n),v2(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i]--;
    }
    for(auto &u : v2) cin >> u;
    vector<int>ans(n);
    for(int i=0; i<n; i++){
        ans[v2[i]-1] = i;
    }
    vector<int>res(n);
    for(int i=0; i<n; i++){
        res[i] = v2[v[ans[i]]];
    }
    for(auto u : res) cout<<u<<" ";
}