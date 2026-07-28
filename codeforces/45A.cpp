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
    int tc;
    vector<string>month={"January","February","March","April","May","June","July","August","September","October","November","December"};

    string currentmonth; cin >> currentmonth;
    int num ; cin >> num;
    int ans;
    for(int i = 0; i < 12; i++){
        if(month[i] == currentmonth){
            ans = i;
            break;
        }
    }
    int futuremonth = (num + ans) % 12;
    cout<<month[futuremonth]<<endl;

}
