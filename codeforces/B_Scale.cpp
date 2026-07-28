#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,k; cin>>n>>k;
        vector<string> s(n); 
        for(int i=0; i<n; i++) cin>>s[i];

        for(int i=0; i<n; i+=k){
            for(int j=0; j<n; j+=k){
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
}