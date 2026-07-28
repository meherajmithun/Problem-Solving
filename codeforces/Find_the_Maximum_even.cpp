#include<bits/stdc++.h>
using namespace std;
#define int  long long

int32_t main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.rbegin() , v.rend());
    
    // for(auto a : v) cout<<a<<" "; cout<<endl;
    int mx = -1;
    // cout<<mx<<endl;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int x = v[i]+v[j];
            if(x%2==0){
                mx = max(mx,x);
            }
        }
    }
    // cout<<mx<<endl;
    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            mx = max(mx,v[i]);
        }
    }
    cout<<mx<<'\n';
}