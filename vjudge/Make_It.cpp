#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>visited(n+10, 0),dist(n+123, 0);
    queue<int>q;
    q.push(1);
    visited[1]=1;
    while(!q.empty()){
        int x = q.front(); q.pop();
        if((x+3)<=n and !visited[x+3]) {
            visited[x+3] = 1; q.push(x+3);
        }
        if((x*2)<=n and !visited[x*2]){
            visited[x*2] = 1; q.push(x*2);
        }
    }
    if(visited[n]) cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}