#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin>>n;
    if(n%2 == 0){
        cout<<-1<<endl;
        return;
    }
    vector<int>v(n);
    for(int i=0; i<n; i++){
        v[i] = (i*2+2) % n;
        v[i]++;
    }
    for(auto u : v) cout<<u<<" ";
    cout<<endl;
}

int32_t main(){
    slow();
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}