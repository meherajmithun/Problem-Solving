//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;
const int N = 1e6;
bitset<N+123>prime;

void sieve(){
    for(int i=3; i<=N; i+=2){
        prime[i] = 1;
    }
    prime[2] = 1;
    for(int i=3; i<=N; i+=2){
        if(prime[i]){
            for(int j=i*i; j<=N; j+=(2*i)){
                prime[j] = 0;
            }
        }
    }
    // for(int i=0; i<100; i++){
    //     if(prime[i]){
    //         cout<<i<<" ";
    //     }
    // }
}

void solve() {
    int n; cin>>n;
	if(n<=4){
		cout<<-1<<endl;
		return;
	}
    vector<int>v;
    for(int i=1; i<=n; i+=2){
        v.push_back(i);
    }
    for(int i=2; i<=n; i+=2){
        v.push_back(i);
    }
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    int k = n/2;
	if(n%2 == 0) k--;
	//k--;
    bool f = 0;
    if(prime[v[k]+v[k+1]] == 0){
            for(auto u : v) cout<<u<<" "; cout<<endl;
        return;
    }
    else{
        for(int j=k+1; j<n; j++){
            if(prime[v[j]+v[k]] == 0){
                swap(v[1+k],v[j]);
                f = 1;
                break;
            }
        }
    }
   //for(auto u : v) cout<<u<<" "; cout<<endl;
    if(f) {
            for(auto u : v) cout<<u<<" "; cout<<endl;
    }
    else cout<<-1<<endl;

}

int32_t main() {
    fast
    sieve();
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
