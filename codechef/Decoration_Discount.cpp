#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    int cost = INT_MAX;
	    for(int i=0; i<n-1; i++){
	        int mn = v[i]+v[i+1]/2;
	        cost = min(cost,mn);
	    }
	    sort(v.begin() , v.end());
	    int mn = INT_MAX;
	    for(int i=0; i<n-1; i++){
	        mn = min(mn,v[i]+v[i+1]);
	    }
	    cout<<min(mn,cost)<<'\n';
	}

}
