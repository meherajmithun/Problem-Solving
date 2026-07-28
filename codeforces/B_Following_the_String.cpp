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
    string str = "abcdefghijklmnopqrstuvwxyz";
    map<char,int>mp;
    for(int i = 0;i < str.size(); i++) mp[str[i]] = 0;

    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];

        for(auto u : mp){
            if(u.second == v[i]){
                cout<<u.first;
                mp[u.first]++;
                break;
            }
        }
    }
    cout<<endl;

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