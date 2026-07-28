// IN THE NAME OF ALLAH

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

int zero_one(string &s,int i, int n){
    int zero=0,one=0;
    int idx = n-1;
    while(s[idx]=='1') idx--;
    int khoroc = 0;
    // cout<<idx<<" "<<nl;
    while(idx>=0 and i<n and i<idx and s[idx]=='0' and s[i]=='1'){ 
        s[idx]='1';s[i]='0';idx--, i++,khoroc++; 
        // cout<<idx<<" "<<i<<nl;    
        // cout<<s<<nl;
    }
    // cout<<s<<" "<<khoroc<<nl;
    return khoroc;
}
int one_zero(string &s,int i, int n){
    int zero=0,one=0;
    int idx = n-1;
    while(s[idx]=='0') idx--;
    int khoroc = 0;
    // cout<<idx<<" "<<nl;
    while(idx>=0 and i<n and i<idx and s[idx]=='1' and s[i]=='0'){ 
        s[idx]='0';s[i]='1';idx--, i++,khoroc++; 
        // cout<<idx<<" "<<i<<nl;    
        // cout<<s<<nl;
    }
    // cout<<s<<" "<<khoroc<<nl;
    return khoroc;
}

int all

void solve(){
    string s; cin>>s;
    int n = sz(s);
    int cost = 0;
    bool start=0;
    for(int i=0; i<n; i++){
        if(i==0 and s[i]=='1') {start = 1;  continue;}
        if(!start and s[i]=='0') continue;
        if(!start and s[i]=='1' and i==n-1) continue;
        if(!start and s[i]=='1'){
            int koto = zero_one(s, i,n);
            int zero = all_zero(s, i,n);
        }
        if(start and s[i]=='0' and i == n-1) continue;
        if(start and s[i]=='0'){
            int koto = one_zero(s,i,n);
            cost += koto;
        }
    }   
    cout<<cost<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}