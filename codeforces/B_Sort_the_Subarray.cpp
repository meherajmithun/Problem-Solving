#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<int>v(n+1),v2(n+1);
        for(int i=1; i<=n; i++) cin>>v[i];
        for(int i=1; i<=n; i++) cin>>v2[i];

        int l=1,r=n;
        for(int i=1; i<=n; i++){
            if(v[i] != v2[i]) {
                l = i;
                break;
            }
        }
        for(int i=n; i>0; i--){
            if(v[i] != v2[i]){
                r = i;
                break;
            }
        }
        
        while(l>1){
            if(v2[l]>=v[l-1]) l--;
            else break;
        }
        while(r<n){
            if(v2[r]<=v[r+1]) r++;
            else break;
        }

        cout<<l<<" "<<r<<endl;

    }

}