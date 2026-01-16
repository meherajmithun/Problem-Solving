#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(int x){
    int s,n; cin >> s >> n;
    map<int,int>mp;
    bool flag = true;
    while(n--){
        int a,b;
        cin >> a >> b;
        mp[b]++;
    }
    for(auto u : mp){
        if(u.second != s){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Scenario #"<<x<<": possible"<<endl;
    else cout<<"Scenario #"<<x<<": impossible"<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    for(int i=1; i<=tc; i++){
        solve(i);
    }
}