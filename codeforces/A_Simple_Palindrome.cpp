#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    string s = "aeiou";
    
    map<char,int>mp;
    int indx = 0;
    for(int i=0; i<n; i++){
        mp[s[indx]]++;
        indx++;
        indx %= 5;
    }

    //for(auto it : mp) cout<<it.first<<" "<<it.second<<endl;
    for(auto u: mp){
        for(int i=0; i<u.second; i++){
            cout<<u.first;
        }
    }
    cout<<endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}