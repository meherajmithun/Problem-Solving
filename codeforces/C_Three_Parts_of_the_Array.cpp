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

int main(){
    int  n ; cin >> n;
    vi v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    long long s1 = 0 , s2 = 0, ans = 0;
    int l = 0;
    int r = n-1;

    while(l <= r){

        if(s1 < s2){
            s1 += v[l];
            l++;
        }
        else{
            s2 += v[r];
            r--;
        }
        if(s1 == s2) ans = s1;
    }
    cout<<ans<<endl;

}