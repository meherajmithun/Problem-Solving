#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a,b,c,k;
int call(int n){
    int x = (a*n*n) + (b*n) + c;
    if(x < k) return 0;
    else return 1;
}
 
void solve(){
    cin>>a>>b>>c>>k;
    int l=0 ,r=1e5,ans=-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(call(mid) == 0){
            ans = mid;
            l = mid+1;
        }else {
            r = mid-1;
        }
    }
   cout<<l<<endl;
}
 
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}