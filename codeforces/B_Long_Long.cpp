#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    int sum=0,op=0;
    for(auto &a : v){
        cin>>a; sum += abs(a);
    }
    for(int i=0; i<n; i++){
        if(v[i]<0){
            v[i] *= -1;
            op++;
            int j=i+1;
            while(j<n and v[j]<=0){
                if(v[j]!=0) v[j] *= -1;
                j++;
            }
        }
    }
    cout<<sum<<" "<<op<<endl;
    // for(auto a : v) cout<<a<<" "; cout<<endl;
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