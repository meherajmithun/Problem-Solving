// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
const int N = 100000005;
#define mod 1000000007
bitset<N>input;
map<int,int>mp;
vector<int>cs(10005);

int lcm(int a, int b){
    int g = __gcd(a,b);
    a /= g;
    return (1LL*a*b);
}

void solve(){
    int a = 1;
    for(int i=1; i<N; i++){
        a = 1LL*lcm(a,i);
        if(input[i]){
            mp[i] = a%mod;
        }
    }
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1; cin>>tc;
    int c = tc;
    int w = 1;
    int i=0;

    while(tc--){
        int a; cin>>a;
        input[a] = 1;
        cs[i] = a;
        i++;
    }

    solve();

    for(int i=0; i<c; i++) {
        cout<<"Case "<<w++<<": ";
        cout<<mp[cs[i]%mod]<<'\n';
    }
}
