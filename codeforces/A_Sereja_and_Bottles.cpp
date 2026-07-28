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
    int cnt = 0;
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i = 0; i < n; i++){
        cin >> v1[i] >> v2[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v1[i] != v1[j]){
                cnt++;
            }
            else if(v1[i] != v2[j]){
                cnt++;
            }
            else if(v2[i] != v1[j]){
                cnt++;
            }
            else if(v2[i] != v2[j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}