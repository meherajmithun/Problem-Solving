#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'

void solve(){
	int x,y; cin>>x>>y;
    if((x%2 == 0 and y%2 == 0) or (x%2 != 0 and y%2 != 0)){
        cout<<min(x,y)<<endl;
    }
    else{
        int k = min(x,y);
        if(k % 2 == 0){
            cout<<k+1<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}