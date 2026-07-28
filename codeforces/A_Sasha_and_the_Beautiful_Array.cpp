/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    int ans = 0;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    for(int i = 1; i < n; i++){
        ans += (v[i] - v[i-1]);
    }
    cout<<ans<<endl;
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve();
    }
    return 0;
}