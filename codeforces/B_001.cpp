#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int x,y; cin>>x>>y;
    if((x%2 == 0 and y%2 == 0) or (x%2 != 0 and y%2 != 0)){
        cout<<min(x,y)<<endl;
    }
    else{
        cout<<min(x,y)+1<<endl;
    }
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}



const int mx = 1e7 + 123;
bool isprime[mx];
vector<int> prime;

void sieve(int n) {
    for (int i = 3; i <= n; i += 2) {
        isprime[i] = true;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    prime.push_back(2); // 2 is the only even prime
    for (int i = 3; i <= n; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
}

int main() {
    int n;
    cin >> n;
    sieve(n)