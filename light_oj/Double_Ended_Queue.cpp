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

void solve() {
	int n,m; cin>>n>>m;
	deque<int>dq;
	while(m--){
		string s; cin>>s;
		if(s=="pushLeft"){
			int val; cin>>val;
			if(sz(dq)==n){
				cout<<"The queue is full\n"; continue;
			}
			dq.push_front(val);
			cout<<"Pushed in left: "<<val<<nl;
		}
		else if(s=="pushRight"){
			int val; cin>>val;
			if(sz(dq)==n){
				cout<<"The queue is full\n"; continue;
			}
			dq.push_back(val);
			cout<<"Pushed in right: "<<val<<nl;
		}
		else if(s=="popLeft"){
			if(dq.empty()){
				cout<<"The queue is empty\n"; continue;
			}
			cout<<"Popped from left: "<<dq.front()<<nl;
			dq.pop_front();
		}
		else if(s=="popRight"){
			if(dq.empty()){
				cout<<"The queue is empty\n"; continue;
			}
			cout<<"Popped from right: "<<dq.back()<<nl;
			dq.pop_back();
		}
	}
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ":\n";
        solve();
    }
    return 0;
}