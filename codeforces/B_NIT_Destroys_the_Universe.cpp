#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int>v(n);
        for(auto &u : v) cin >> u;
        bool on = false;
        int cnt = 0;
        for(int i=0; i<n; i++){
            
            if(v[i] != 0){
                on = true;
            }
            else if(on and v[i] == 0 and i != n-1){
                cnt++;
            }
        }
        if(cnt == 0 and v[0] != 0){
            cnt++;
        }
        cout<<cnt<<'\n';
    }
}