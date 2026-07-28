#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    fast();
    int n,k;
    cin >> n >> k;
    vector<string>v(n);
    for(auto &u : v) cin >> u;
    vector<string>ans;
    for(int i=0; i<k; i++){
        ans.push_back(v[i]);
    }
    sort(ans.begin() , ans.end());
    for(int i=0; i<k; i++) cout<<ans[i]<<endl;
}