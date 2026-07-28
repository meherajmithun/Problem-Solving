// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 100005;
bitset<N>isprime;
vector<int>prime;

void sieve(){
   isprime[1]=1;
   for (int i = 2; i < N; i++){
       if (isprime[i] == 1) continue;
       for (int j =i+i;j < N; j+=i) isprime[j] = 1;
   }
   for(int i = 2; i < N; i++){
      if(!isprime[i]) prime.push_back(i);
   }
}
int calculate_prime_factor_cnt(int n){
	int ans = 0;
	for(int i=0;prime[i]*prime[i]<=n; i++){
	   if(n%prime[i] == 0){
	       while(n%prime[i] == 0){
	           n /= prime[i];
	           ans++;
	       }
	   }
	}
	if(n>1) ans++;
	return ans;
}


void solve() {
	int a,b,k; cin>>a>>b>>k;
	if(k==1){
		if(a>b){
			if(a%b==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else if(b>a){
			if(b%a==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"NO\n";
		return;
	}
	int x = calculate_prime_factor_cnt(a);
	int y = calculate_prime_factor_cnt(b);
	// cout<<x<<" "<<y<<nl;
	int cnt = x+y;
	if(cnt<k){
		cout<<"NO\n"; return;
	}
	cout<<"YES\n";

}
int32_t main() {
    fast
    sieve();
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}