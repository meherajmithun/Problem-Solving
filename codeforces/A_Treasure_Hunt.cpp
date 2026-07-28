#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void slow(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
	ll x,y,a; cin>>x>>y>>a;
	ll c = a/(x+y);
	ll ans = c*(x+y);
    ans += x;
	if(ans > a){
		cout<<"NO"<<'\n';
        return;
	}
		else{
			cout<<"YES"<<'\n';
		}
	

}

int main(){
	slow();
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}