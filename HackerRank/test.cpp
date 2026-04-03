#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y ; cin>>x>>y;
    if(x==y){
        cout<<"0\n"; return;
    }
    if(x>y){
        int dif = x-y;
        if(dif&1){
            cout<<(dif/2)+2<<endl;
        }
        else{
            cout<<(dif/2)<<endl;
        }
        return;
    }
    cout<<y-x<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}