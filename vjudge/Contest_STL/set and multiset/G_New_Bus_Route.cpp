#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    ll mn = LLONG_MAX;
    for(int i=0; i<n-1; i++){
        mn = min(mn,abs(v[i] - v[i+1]));
    }
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(abs(v[i] - v[i+1]) == mn) cnt++;
    }
    cout<<mn<<" "<<cnt<<endl;
}