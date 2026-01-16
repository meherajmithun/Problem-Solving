#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    int query; cin>>query;
    while(query--){
        int a; cin>>a;
        int x = upper_bound(v.begin() , v.end() , a)-v.begin();
        cout<<x<<endl;
    }
} 