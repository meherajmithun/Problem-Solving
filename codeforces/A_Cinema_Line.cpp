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
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

int32_t main() {
    control;
    int n ; cin >> n;
    vi v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    if(v[0] != 25){
        no;
    }
    else{
        int cnt_25 = 0;
        int cnt_50 = 0;
        int cnt_100 = 0;

        for(int i = 0; i < n; i++){
            if(v[i] == 25){
                cnt_25++;
            }
            else if(v[i] == 50 and cnt_25 != 0){
                cnt_25--;
                //cnt_50++;
            }
            else {
                cnt_100++;
            }
        }
        if(cnt_25 == cnt_50 and cnt_100 == 0 ){
            yes;
        }
        else{
            no;
        }
    }
}