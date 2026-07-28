#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int l=0,r=0;
    while(l<n-1 and v[l] < v[l+1]) l++,r++;
    while(r<n-1 and v[r] > v[r+1]) r++;
    sort(v.begin()+l,v.begin()+r+1);

    //for(auto u : v) cout<<u<<" ";

    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            cout<<"no"<<'\n';
            return 0;
        }
    }
    if(n == 2 and l!=0 and r!= 0){
        cout<<"yes"<<'\n'<<1<<" "<<1<<'\n';
        return 0;
    }

    cout<<"yes"<<'\n'<<l+1<<" "<<r+1;
}