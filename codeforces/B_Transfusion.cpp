#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n ; cin >> n;
    vector<ll>v;
    v.push_back(0);
    for(int i=1 ; i<n+1; i++){
        ll a ; cin >> a;
        v.push_back(a);
    }
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    ll odd=0,even=0,OddSum=0,EvenSum=0;
    for(int i=1; i<n+1; i++){
        if(i%2==0){
            EvenSum += v[i];
            even++;
        }
        else{
            OddSum += v[i];
            odd++;
        }
    }
    // cout<<OddSum<<" "<<odd<<endl;
    if(OddSum % odd == 0 and EvenSum % even == 0){
        if(OddSum / odd == EvenSum / even){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

void optimize(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
}
int main(){
    optimize();
    int tc ; cin >> tc;
    while(tc--){
        solve();
    }
}