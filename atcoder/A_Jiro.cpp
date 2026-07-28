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
    char a , b, c;
    cin >> a >> b >> c;
    int cntA = 0 , cntB = 0, cntC = 0;
    if(a =='>') cntA++;
    else cntB++;
    if(b == '>') cntA++;
    else cntC++;
    if(c == '>') cntB++;
    else cntC++;

    if(cntA == 1) cout<<"A"<<endl;
    else if(cntB == 1) cout<<"B"<<endl;
    else cout<<"C"<<endl;

}