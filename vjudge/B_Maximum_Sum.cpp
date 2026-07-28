#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n,k; cin>>n>>k;
    vector<int>v(n);
    int sum = 0;
    for(auto &u : v) cin>>u;

    int first=0,last=0;
    sort(v.begin() , v.end());

    int i=2*k,j = n-1;

    for(int a=i; a<n; a++){
        sum += v[a];
    }
    int mx = sum;
    
    while(i > 0){

        sum += v[i-1];
        sum += v[i-2];
        sum -= v[j];
        i -= 2;
        j--;
        mx = max(mx,sum);
        //cout<<mx<<" "<<sum<<endl;

        // int tmp = (v[0] + v[1]);
        // // cout<<tmp<<endl;
        // first = sum-tmp;
        // last = sum-v[v.size()-1];
        // //cout<<first<<" "<<last<<endl;
        // mx = max(first,last);
        // if(first > last){
        //     v.erase(v.begin());
        //     v.erase(v.begin()+0);
        // }
        // else{
        //     v.erase(v.end());
        // }
        // //cout<<sum<<endl;
        // //  cout<<first<<" "<<last<<endl;
        // // // cout<<mx<<endl;
        // // for(auto u : v) cout<<u<<" ";
        // // cout<<endl;
        // sum -= min(tmp,v[v.size()-1]);

    }
    cout<<mx<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}