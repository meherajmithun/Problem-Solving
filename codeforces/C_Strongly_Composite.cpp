#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

const ll N = (ll) 3e6+123;
bitset<N>isprime;
vector<int>prime;
map<int,int>mp;

void sieve(){
	for(int i=3; i<=N; i+=2) isprime[i]=1;
	isprime[2]=1;
	for(int i=3; i<=sqrt(N); i+=2){
		if(isprime[i])
		for(int j=i*i; j<=N; j+=(2*i)){
			isprime[j]=0;		
		}
	}
	prime.push_back(2);
	for(int i=3; i<=N; i+=2){
		if(isprime[i]) prime.push_back(i);
	}
	//for(int i=0; i<100; i++) cout<<prime[i]<<" ";
}

void prime_factor(int n){
	for(int i=0; prime[i]*prime[i]<=n; i++){
		while(n%prime[i] == 0){
			n /= prime[i];
			mp[prime[i]]++;
		}
	}
	if(n>1) mp[n]++;
	//for(auto [a,b] : mp) cout<<a<<"->"<<b<<endl;
}

void solve(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		prime_factor(a);
	}
	int ans = 0,cnt=0;
	for(auto [a,b] : mp){
	//	cout<<a<<"->"<<b<<endl;
		ans += (b/2);
		cnt += (b%2);
	}
	//cout<<ans<<" ";
	ans += (cnt/3);
	mp.clear();
	cout<<ans<<'\n';

}

int32_t main(){
	sieve();
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}