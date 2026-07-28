/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int , int>cnt;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        cnt[v[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans  = max(ans , cnt[v[i]]);
    }
    return n-ans;
}
int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         cout << solve() <<endl;
    }
}

