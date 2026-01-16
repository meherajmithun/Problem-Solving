/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

int main(){
    vector<int>v;
    for(int i = 1; i <= 1666; i++){
        if(i % 3 != 0 and i % 10 != 3){
            v.push_back(i);
        }
    }
    int tc ; cin >> tc;
    while(tc--){
    int n; cin >> n;
    n--;
    cout<<v[n]<<endl;
    }
    
}