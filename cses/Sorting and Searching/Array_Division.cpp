// IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
 
bool check(vector<int>&v,int k, int mid,int n){
    int cnt = 1,sum=0;
    for(auto a : v){
        sum += a;
        if(sum>mid){
            cnt++;
            sum = a;
        }
    }
    return cnt<=k;
}
 
void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
 
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    // cout<<n<<k<<nl;
 
    int mx = *max_element(all(v));
    int sum = 0;
    for(auto a : v) sum+=a;
 
    // cout<<mx<<" "<<sum<<nl;
 
    int lo=mx,hi=sum;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(v,k,mid,n)){
            hi = mid-1;
        }
        else lo = mid+1;
    }   
    cout<<hi+1<<nl;
}
 
int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    while(tc--){
        solve();
    }
}
