// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int N = 1000005;
bitset<N>isprime;
vector<int>prime;
  
void sieve(){
	for(int i=2; i<N; i++){
		if(isprime[i]) continue;
		prime.push_back(i);
		for(int j=i+i; j<N; j+=i) isprime[j]=1;
	}
	// for(int i=0; i<20; i++) cout<<prime[i]<<" ";
}

void solve() {
    
}

int32_t main() {
    fast
    sieve();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}