#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<ll>v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(a % 2 == 0){
            v.insert(v.begin(),a);
        }
        else{
            v.push_back(a);
        }
    }
    int sum = 0;
    int q = 0;
    for(auto u: v){
        sum += u;
        if(sum % 2 == 0){
            q++;
            while(sum % 2 == 0){
                sum /= 2;
            }
        }
    }
    cout<<q<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}