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
const int N = 10000005;
vector<int>Hash[N+3];
vector<pair<int,int>>vp;

int find_ans(){
    for(int i=1; i<N; i++){
        if(sz(Hash[i])==0) continue;
        if(sz(Hash[i])>1) {
            // cout<<"x";
            cout<<Hash[i][0]<<" "<<Hash[i][1]<<nl; 
            return 1;
        }


        for(int j=i+i; j<N; j+=i){
            if(sz(Hash[j])>0){
                // cout<<"X";
                // if(Hash[j]>Hash[i]) cout<<Hash[i]<<" "<<Hash[j]<<nl;
                // else cout<<Hash[j]<<" "<<Hash[i]<<nl;
                // cout<<Hash[i][0]<<" "<<Hash[j][0]<<nl;
                int a = Hash[i][0];
                int b = Hash[j][0];
                if(a>b) swap(a,b);
                cout<<a<<" "<<b<<nl; 
                return 1;
            }
        }
    }
    return -1;
}

void solve(){
    int n; cin>>n;
    int i=1;
    vector<int>v(n);
    for(auto &a : v) {cin>>a; vp.push_back({a,i});i++;}

    for(int i=0; i<n; i++){
        Hash[v[i]].push_back(i+1);
    }
    // for(int i=1; i<20; i++){
    //     cout<<i<<" ->"<<sz(Hash[i])<<" --> ";
    //     // for(auto a : Hash[i]) cout<<a<<" "; cout<<nl;
    //     if(sz(Hash[i])==1) cout<<Hash[i][0];
    //     if(sz(Hash[i])==2) cout<<Hash[i][0]<<" "<<Hash[i][1]; 
    //     cout<<nl;
    // }




    // for(auto a : v) cout<<a<<" "; cout<<nl;
    sort(all(vp));
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl; cout<<nl<<nl;
    // for(int i=1; i<12; i++) cout<<i<<" "<<Hash[i]<<nl;

    int x = find_ans();
    if(x==-1){
        cout<<vp[0].second<<" "<<vp[1].second<<nl;
    }

}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    // int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}