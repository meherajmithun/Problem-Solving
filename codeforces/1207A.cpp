/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve(){
	int b,p,f,cnt=0,h,c;
	cin >> b >> p >> f >> h >> c;
	if(b == 1) return 0;
	else if(b == 2) return max(h,c);
	else {
		if(h < c){
			int x = min(b/2,f);
			b = b - x*2;
			int y = min(b/2,p);
			int ans = x * c + y * h;
			return ans;
		}
		else {
			int x = min(b/2,p);
			b = b - x*2;
			int y = min(b/2,f);
			int ans = x * h + y * c;
			return ans;
		}
	}
}
int main(){
	optimize();
	int T;
	cin >> T;
	while(T--){
		cout<< solve()<<endl;
	}
}

