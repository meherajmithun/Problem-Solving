#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+123;

void solve(){
	int n; cin>>n;
	vector<int>input(n),freq(N, 0);
	for(auto &a : input){
		cin>>a;
		freq[a]++;
	}
	int cnt = 0;
	// for(auto a : freq) cout<<a<<" "; cout<<endl;
	for(int i=1; i<N; i++){
		cnt += freq[i];
	}
	cout<<cnt<<endl;
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

// 1 2 3 4

// 1 1 3 4

// 1 0 1 1

// 1 2 3 4 5
// 1 1 1 2 2

// 		1
// freq[] =1 2 2 