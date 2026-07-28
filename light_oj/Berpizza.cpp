#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){

	multiset<pair<int,int>>ms,ms2;


    int query; cin>>query;
    int i = 1;
    while(query--){
    	int type; cin>>type;
    	if(type==1){
    		int a; cin>>a;
    		ms.insert({-a, i});
    		ms2.insert({i, a});
    		i++;
    	}
    	if(type==2){
    		auto p = *(ms2.begin());
    		cout<<p.first<<" ";
    		ms2.erase(ms2.begin());
    		pair<int,int> t = make_pair(-1*p.second, p.first);
    		ms.erase(ms.find(t));

    	}
    	if(type==3){
    		auto p = *(ms.begin());
    		cout<<p.second<<" ";
    		ms.erase(ms.begin());
    		int x = -1*p.first;
    		pair<int,int>q = {p.second, x};
    		ms2.erase(ms2.find(q));
    	}
    }
    // for(auto [a,b] : ms) cout<<a<<" "<<b<<endl;
    // for(auto [a,b] : ms2) cout<<a<<" "<<b<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}