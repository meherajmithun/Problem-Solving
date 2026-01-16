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
    string s ; cin >> s;
    int cost = 0;
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            j = i + 1;
            while(s[j] != '0'){
                j++;
            }
            sort(s.begin()+i,s.end()+j);
        }
        cost += abs(i-j)+1;
    }
    cout<<cost<<endl;
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