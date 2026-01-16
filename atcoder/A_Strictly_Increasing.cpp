#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    bool f = true;
    for(int i=0; i<n-1; i++){
        if(v[i] >= v[i+1]){
            f = 0;
            break;
        }
    }
    if(f) cout<<"Yes";
    else cout<<"No";

}