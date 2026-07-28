#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(n),v2(m);
    map<int,int>mp,mb;

    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    } 

    for(int i=0; i<m; i++){
        cin>>v2[i];
        mb[v2[i]]++;
    }
    int a=0,b=0;
    for(int i=1; i<=k ;i++){
        if(mp[i] == 0 and mb[i] == 0){
            cout<<"NO"<<'\n';
            return;
        }
        if(mp[i] == 0 or mb[i] == 0){
            if(mp[i]) a++;
            else b++;
        }
    }
    if(a > k/2 or b > k/2){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }

}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}