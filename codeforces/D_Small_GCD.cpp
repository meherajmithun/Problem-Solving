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
const int N = 100000+123;
vector<vector<int>>cnt(N);
void calculate(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            cnt[j].push_back(i);
        }
    }
    // for(int i=1; i<=10; i++){
    //     cout<<i<<" -> ";
    //     for(auto a : cnt[i]) cout<<a<<" "; cout<<nl;
    // }
    for(int i=1; i<N; i++){
        sort(rall(cnt[i]));
    }
    // for(int i=1; i<=10; i++){
    //     cout<<i<<" -> ";
    //     for(auto a : cnt[i]) cout<<a<<" "; cout<<nl;
    // }
}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(all(v));
    // map<int,int>mp,tmp;
    vector<int>mp(N),tmp(N);
    int ans = 0;
    int baki=n;
    for(auto a : v){
        baki--;
        for(auto x : cnt[a]){
            int val = mp[x]-tmp[x];
            for(auto y : cnt[x]){
                tmp[y] += val;
            }
            ans += (x*val*baki);
        }
        for(auto x : cnt[a]){
            for(auto y : cnt[x]) tmp[y]=0;
        }
        for(auto x : cnt[a]) mp[x]++;
    }
    print(ans);
}

int32_t main(){
    calculate();
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}