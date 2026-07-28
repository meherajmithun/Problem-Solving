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
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1){
        cout<<v[0]<<endl;
        return ;
    }
    int sum = 0;
    for(int i = 0; i < n; i = i + 2){
        if(i != n-1){
            sum += v[i] - v[i+1];
        }
        else {
            sum = sum +v[i];
        }
    }
    cout<<sum<<endl;
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