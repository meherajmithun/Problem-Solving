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
    int a,b; cin>>a>>b;
        if(a==b){
        print(0);
        return;
    } 
    if((a%b != 0 and b%a != 0) or (a==1 and b%4!=0 and b%2!=0 and b%8!=0) or(b == 1 and a%2!=0 and a%4!=0 and a%8!=0)){
        print(-1);
        return;
    }  
    vector<int>v = {2,4,8};
    
    int n = 3;
    int k;
    if(a>b) k = a/b;
    else k = b/a;
    int cnt = 0,i=n-1;
    while(k>0 and i>=0){
        if(k%v[i] == 0){
            k /= v[i];
            cnt++;
            if(k == 0) break;
            i = 2;
        }
        else{
            i--;
        }
    }
    if(cnt == 0 or k>1) cnt=-1;
    print(cnt);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}