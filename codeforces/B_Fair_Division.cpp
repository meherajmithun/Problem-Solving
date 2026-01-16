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
    int n ; cin >> n;
    vector<int>v(n);
    int sum = 0;
    int cnt1 = 0; int cnt2 = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(n > 2){
        for(int i = 0; i < n; i++){
            if(v[i] == 1) cnt1++;
            else cnt2++;
        }
        if(cnt1 == cnt2){
            if(sum % 2 == 0) yes;
        }
        else{
            if((sum % 2 == 0) and (cnt1 != 0 and cnt2 != 0)) yes;
            else no;
        }
    }
    else {
        for(int i = 0;i < n; i++){
            if(v[i] == 1) cnt1++;
            else cnt2++;
        }
        if(cnt1 == n || cnt2 == n) yes;
        else no;
    }
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