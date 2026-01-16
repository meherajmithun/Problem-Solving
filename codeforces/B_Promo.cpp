#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int32_t main(){
	optimize();
	int n,query;
    cin >> n >> query;
    vector<int>price(n);
    for(auto &u : price) cin >> u;
    sort(price.begin() , price.end());
    reverse(price.begin() , price.end());
    vector<int>pre(n+1);
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + price[i-1];
    }
    // for(auto u : pre) cout<<u<<" ";
    //     cout<<endl;
    while(query--){
        int x,y; cin >> x >> y;
        cout<<(pre[x] - pre[x-y])<<endl;
    }
}