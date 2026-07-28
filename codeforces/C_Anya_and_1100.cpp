#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    string s;
    cin >> s;
    int n = (int)s.size();
    int cnt = 0;
    for (int i = 0; i + 3 < n; i++)
    {
        if (s.substr(i, 4) == "1100")
            cnt++;
    }
    int q;
    cin >> q;
    while (q--)
    {
		int x;
		cin >> x;
		char c;
		cin >> c;
		x--;
		for (int i = max(0, x - 3); i + 3 <= min(n - 1, x + 3); i++) {
			cnt -= (s.substr(i, 4) == "1100");
		}
		s[x] = c;
		for (int i = max(0, x - 3); i + 3 <= min(n - 1, x + 3); i++) {
			cnt += (s.substr(i, 4) == "1100");
        }
        if(cnt) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}