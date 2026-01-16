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

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            int t = k;
            if(i==n-1) continue;
            int j;
            bool bl=1;
            for(j=i+1; j<n; j++){
                if(s[j]=='1') { bl=0 ; break;}
                t--;
                if(t==0) break;
            }
            i = j;
            if(!bl) i--;
            // cout<<i<<" ";
        }
        else cnt++;
    }   
    print(cnt);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}