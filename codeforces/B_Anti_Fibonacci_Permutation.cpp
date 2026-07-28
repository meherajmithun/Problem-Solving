#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int v[n];
        iota(v, v+n, 1);
        // for(auto u : v) cout<<u<<" ";
        // cout<<endl;  
        int cnt = 0;
        do{
            bool kor = true;
            for(int i=2; i<n; i++){
                if(v[i-2]+v[i-1] == v[i]) { kor = false; break; } 
            }
            if(kor){
                for(auto u : v) cout<<u<<" ";
                cout<<endl;
                cnt++;
            }
            if(cnt == n){
                break;
            }
        }
        while(next_permutation(v,v+n));

    }
}