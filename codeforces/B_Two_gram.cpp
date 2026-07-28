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

int main(){
    fastIO;
    int n; cin >> n;
    string s,s1; cin >> s;
    if(n == 2){
        cout<<s<<endl;
        return 0;
    }
    if(n == 3){
        cout<<s[0]<<s[1]<<endl;
        return 0;
    }
    map<string, int>cnt;
    vector<string>v;
    for(int i = 0; i < n; i++){
        s1 = s.substr(i,2);
        v.pb(s1);
    }
    for(int i = 0; i < v.size(); i++){
        cnt[v[i]]++;
    }
    int ans = 0;
    string result;
    for(auto u : cnt){
        if(u.second > ans){
            ans = u.second;
            result = u.first;
        }
    }
    cout<<result<<endl;
}