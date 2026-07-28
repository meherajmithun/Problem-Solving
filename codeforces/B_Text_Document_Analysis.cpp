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
    int n ; cin >> n;
    string s ; cin >> s;
    vi v1 ; vi v2;
    int j = 0;
    int cntu = 0;
    for(int i = 0; i < n; i++){
        cntu = 0;
        if(s[i] == 95){
            j = i + 1;
            while(j < n and (s[j] != 95) and s[j] != 40 and s[j] != 41){
                if((s[j] > 64 and s[j] < 91) || (s[j] > 96 and s[j] < 123)){
                    cntu++;
                }
                j++;
            }
            i = j - 1;
            v1.pb(cntu);
        }
    }
    int cntp = 0;
    for(int i = 0; i < n; i++){
        cntp = 0;
        if(s[i] == 40){
            j = i + 1;
            while(j < n and s[j] != 95 and s[j] != 41){
                j++;
            }
            cntp++;
            if(s[j] == 95){
                
            }
        }
    }
}