#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

bool range(int x, int y){
    int k = x/2;
    if(k==y) return 1;
    return 0;
}

void solve(){
    int x,y; cin>>x>>y;
    if(x<y){
        cout<<"NO"<<nl;
        return;
    } 
    if((x==2 and y == 1) or (x == 3 and y==0) or (x==4 and y==-1)){
        cout<<"YES"<<nl; return;
    } 
    if(y>0){
        int k = x-(y*2);
        if(k%3==0 or k%5==0){
            cout<<"YES"<<nl;
        }
        else cout<<"NO"<<nl;
        return;
    }
    if(range(x,y)){
        cout<<"YES"<<nl;
        return;
    }
    int k = x-(y*4);
    if(k%3==0) cout<<"YES";
    else cout<<"NO";
    cout<<nl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}