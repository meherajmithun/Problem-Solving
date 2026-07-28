#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    if(n == 1){
        cout<<"1 1"<<'\n';
        return ;
    }
    int l = 0,r=0,mx = INT_MIN , left = 0,right = 0;
    while(r < n){
        if(mp[v[r]] == 1){
            if(mx <= (r-l+1)){
                left = l,right = r;
            }
            while(l < r and mp[v[r]] == 1){
                mp[v[l]]--;
                l++;
            }
        }
        r++;
    }
    if(!left and !right){
        cout<<0<<'\n';
        return ;
    }
    cout<<left<<" "<<right<<'\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}