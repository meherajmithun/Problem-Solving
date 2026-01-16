#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n,m; cin>>n>>m;
    vector<int>v[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a; cin>>a;
            v[i].push_back(a);
        }
    }
    // for(auto u : v){
    //     for(auto q : u){
    //         cout<<q<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int j=0; j<m; j++){
    //     for(int i=0; i<n; i++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int ans = 0;
    for(int i=0; i<m; i++){
        vector<int> tmp;
        for(int j=0; j<n; j++){
            tmp.push_back(v[j][i]);
        }
        sort(tmp.begin(), tmp.end());

        // for(auto u : tmp) cout<<u<<" ";
        // cout<<endl;

        int sum = 0;
        for(int k=0; k<n; k++){
            ans += tmp[k]*k - sum;
            sum += tmp[k];
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc = 1; cin>>tc;
	while(tc--){
		solve();
	}
}
