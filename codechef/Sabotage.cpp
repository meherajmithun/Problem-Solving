#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    int n,x,k; cin>>n>>x>>k;
	    vector<int>v(n);
	    for(auto &u : v) cin>>u;
	    while(k--){
	        x += 100;
	    }
        cout<<x<<'\n';
	    int pos=1;
	    for(auto u : v){
	        if(u>x) pos++;
	    }
	    cout<<pos<<'\n';
	}

}
