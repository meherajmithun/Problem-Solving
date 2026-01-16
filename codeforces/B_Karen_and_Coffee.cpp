#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout << x <<'\n'
const int mx = 200000+123;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);s,

    int n,k,query;
    cin>>n>>k>>query;
    vector<int>v(mx);

    while(n--){
        int l,r; cin>>l>>r;
        v[l] += 1;
        v[r+1] -= 1;
    }

    //prefix sum of interval

    for(int i=1; i<mx; i++){
        v[i] += v[i-1];
    }
    
    vector<int>ans(mx);

    for(int i=0; i<=mx; i++){
        if(v[i] >= k){
            ans[i] = 1;
        }
    }

    //prefix sum of admissible

    for(int i=1; i<= mx; i++){
        ans[i] += ans[i-1];
    }

    while(query--){
        int a,b; cin>>a>>b;
        cout<<ans[b]-ans[a-1]<<endl;
    }
}