#include<bits/stdc++.h>
using namespace std;

vector<int>v;
void call(){
	v.push_back(0);
	for(int i=1; i<3e5+123; i++) v.push_back(v[i-1]^i);
}

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}


void solve(){
	int a,b; cin >> a >> b;
	int k = b^v[a-1];
	if(k == 0) cout<<a<<endl;
	else if(k != a) cout<<(a+1)<<endl;
	else cout<<(a+2)<<endl;
}
int main(){
	optimize();
	call();
	
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}



///a1^a2^a3^a4 == b
//k ^ b = 0
//else 