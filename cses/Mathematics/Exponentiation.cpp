#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
 
void bigmod(){
	int a,b; cin>>a>>b;
	int ans =1;
	while(b>0){
		if(b&1) ans = ((ans%mod)*(a%mod)%mod);
		a = ((a%mod)*(a%mod))%mod;
		b >>= 1;
	}
	cout<<ans<<'\n';
}
 
int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		bigmod();
	}
}
