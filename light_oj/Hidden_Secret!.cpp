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

	string a;getline(cin,a);
	string b;getline(cin,b);
	// cout<<a<<"\n"<<b<<nl;
	vector<int>mp1(26,0),mp2(26,0);
	for(auto c : a){
		if(c==' ') continue;
		c = tolower(c);
		mp1[c-'a']++;
	}
	for(auto c : b){
		if(c==' ') continue;
		c = tolower(c);
		mp2[c-'a']++;
	}
	// for(int i=0; i<26; i++) cout<<mp1[i]<<" "<<mp2[i]<<nl;
	if(mp1==mp2) cout<<"Yes\n";
	else cout<<"No\n";
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}