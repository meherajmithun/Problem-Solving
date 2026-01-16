/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
using namespace std;

int solve(){
    int n; cin >> n;
    vector<int>v(n);
    vector<int>v1;
    for(int i = 0; i < n; i++) cin >> v[i];

    int count_0 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            count_0++;
        }
        else {
            v1.pb(count_0);
            count_0 = 0;
        }
    }
    //For push the last 0;
    
    v1.pb(count_0);
    int ans = 0;
    for(int i = 0; i < v1.size(); i++){
        ans = max(ans,v1[i]);
    }
    return ans;
}
int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
        cout << solve() <<endl ;
    }
}
