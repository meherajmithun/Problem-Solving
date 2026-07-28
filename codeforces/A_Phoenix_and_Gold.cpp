#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x; cin>>n>>x;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.rbegin() , v.rend());
    int sum = 0;
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(v[i]!=-1 and (sum+v[i]) != x){
            sum += v[i]; ans.push_back(v[i]);
            v[i] = -1;
            // cout<<sum<<endl;
        }
        else{
            int j=0;
            bool f = 0;
            while(j<n){
                if(v[j] !=-1 and sum+v[j] != x){
                    sum += v[j]; ans.push_back(v[j]);
                    v[j] = -1;
                    f=1; break;
                }
                else j++;
            }
            if(!f){
                cout<<"NO\n"; return ;
            }
        }
    }
    cout<<"YES\n";
    for(auto a : ans) cout<<a<<" "; cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}