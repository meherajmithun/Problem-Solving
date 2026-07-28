#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    vector<int>v(3);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    if(v[0] * v[1] == v[2]) cout<<"Yes";
    else cout<<"No";   
}