#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i :v) cin>>i;

    vector<int>res;

    for(int i=0; i<n; i++){
        if(v[i] == n-i){
            cout<<v[i]<<" ";
        }
        else{
            int idx ;
            for(int j=i+1; j<n; j++){
                if(v[j]==n-i){
                    idx = j;
                    break;
                }
            }
            for(int j=idx; j>=i; j--){
                //res.push_back(v[j]);
                cout<<v[j]<<" ";
            }
            for(int j=idx+1; j<n; j++){
                // res.push_back(v[0j]);
                cout<<v[j]<<" ";
            }
            break;
        }
    }
    cout<<endl;
    // for(int i=0; i<n; i++) cout<<res[i]?



}



int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }


}