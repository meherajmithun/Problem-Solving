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
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
int main() {
    fastIO;
    int n; cin >> n;
    vl v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            v[i]--;
            for(int j = 0; j < n; j++){
                if(v[j] == v[i]+1 ){
                    v[j] = v[i];
                }
            }
        }
        else{
            v[i]++;
            for(int j = 0; j < n; j++){
                if(v[j] == v[i]-1 ){
                    v[j] = v[i];
                }
            }
        }
    }
    for(auto u : v) cout<<u<<" ";
    cout<<endl;

    return 0;
}