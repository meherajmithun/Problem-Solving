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
    string s ;cin >> s;
    int n ; cin >> n;
    int cnt = 0;
    while(n--){
        cnt = 0;
        int m; cin >> m;
        for(int i = 0;i < m; i++){
            char c; cin >> c;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == c){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}