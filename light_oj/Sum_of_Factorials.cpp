// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 20;
vector<int>fact(N, 1);

void factorial(){
	for(int i=2; i<N; i++){
		fact[i] = (fact[i-1]*i);
	}
	// for(auto a : fact) cout<<a<<" "; cout<<nl;
}

void solve() {
	int n; cin>>n;
	vector<int>idx,cnt(N+123, 0);
	for(int i=N-1; i>=0; i--){
		if(fact[i]<=n){
			if(cnt[i]){
				cout<<"impossible\n"; return;
			}
			cnt[i]=1;
			idx.push_back(i);
			n -= fact[i];
		}
	}
	if(n!=0){
		cout<<"impossible\n"; return ;
	}
	reverse(all(idx));
	for(int i=0; i<sz(idx); i++){
		cout<<idx[i]<<"!";
		if(i!=sz(idx)-1) cout<<"+"; 
	}
	cout<<nl;

}
int32_t main() {
    fast
    factorial();
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}