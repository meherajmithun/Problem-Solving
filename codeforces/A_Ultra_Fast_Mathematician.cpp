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
    string s1,s2;
    cin >> s1>>s2;
    
    vector<string>v1;
    vector<string>v2;
    vector<string>v3;
    for(int i = 0; i < s1.size(); i++){
        for(int j = i; j < i+1; j++){
            if(s1[i] != s2[j]){
                string a = "1";
                v3.push_back(a);
            }
            else {
                string b = "0";
                v3.push_back(b);
            }
        }
    }
    for(auto u : v3) cout<<u;
    cout<<endl;
    
}