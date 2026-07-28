#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    if(n == 1){
        int a; cin>>a;
        cout<<a<<endl;
        return;
    }
    int sum = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int mn = INT_MAX,r=n-1;
    int s = 0;
    bool f = true;
    //sum = v[n-1];
    while(r >= 0){
        s += v[r];
        sum -= v[r];
        if(s <= sum){
            f = 0;
            mn = min(mn,abs(s-sum));
        }
        else{
            s -= v[r];
            sum += v[r];
        }
        r--;
    }

    cout<<mn<<endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc = 1; //cin>>tc;
    while(tc--){
        solve();
    }
}