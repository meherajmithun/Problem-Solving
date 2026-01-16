#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();
    int n,m;
    cin >> n >> m;
    map<pair<string,string>,int>mp;
    for(int i=0; i<n; i++){
        string s,s2;
        cin >> s >> s2;
        mp[{s,s2}]++;
    }
    while(m--){
        string s; cin >> s;

    }
}