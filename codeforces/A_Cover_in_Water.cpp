#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '.' and s[i+1] == '.' and s[i+2] == '.'){
            cout<<2<<endl;
            return ;
        }
        else if(s[i] == '.') cnt++;
    }
	cout<<cnt<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}