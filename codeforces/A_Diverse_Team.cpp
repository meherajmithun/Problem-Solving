#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;

    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]] = i+1;
    }

    if(mp.size() >= k){
        int i = 0;
        cout<<"YES"<<endl;
        for(auto u : mp){
            cout<<u.second<<" ";
            i++;
            if(i == k) break;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
