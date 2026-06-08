#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    // for(int i=1; i<=n; i++) cout<<v[i]<<" "; cout<<endl;
    int l=1,r=n,mn=1,mx=n;
    while(l<r){
        if(v[l]==mn){
            l++; mn++; 
        }
        else if(v[l]==mx){
            l++; mx--;
        }
        else if(v[r]==mx){
            r--; mx--;
        }
        else if(v[r]==mn){
            mn++; r--;
        }
        else break;
    }
    if(l==r) cout<<-1<<endl;
    else cout<<l<<" "<<r<<endl;
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