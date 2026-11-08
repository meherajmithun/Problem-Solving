// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
	int x,y; cin>>x>>y;
	int pay=x,k=1,profit=y;
	int day = 1;
	while(profit<pay){
		day++;
		int new_k = k+1;
		int nibo = y*(new_k*new_k) + profit;
		int nibo_na = profit + profit;
		if(nibo>nibo_na){
			profit = nibo;
			pay += x;
			k++;
		}	
		else{
			profit = nibo_na;
		}
	}
	cout<<day<<nl;

}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}