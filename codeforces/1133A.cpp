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
    string s1,s2 ; cin >> s1 >> s2;
    string s = s1.substr(0,2);
    string st = s1.substr(3,5);

    int shuru = stoi(s);
    int shuruminute = stoi(st);

    string se = s2.substr(0,2);
    string et = s2.substr(3,5);

    int shesh = stoi(se);
    int seshtime = stoi(et);

    int ans1 = shuru*60+shuruminute;

    //int ans = shesh-shuru;
    //int ans2 = abs(shuruminute - seshtime);
    int sum = shesh*60+seshtime;

    int ans = abs(sum-ans1);
    int finalTime = ans/2;
    cout<<finalTime<<endl;
    int y = 0;
    if(finalTime >= 60){
        y = finalTime/60;
        shuru += y;
        shuruminute = finalTime % 60;

    }
    else{
        //y = ans / 2;
        shuruminute += finalTime;
    }
    if(shuru < 9){
        cout<<0<<shuru<<":";
    }
    else{
        cout<<shuru<<":";
    }
    if(shuruminute<9){
        cout<<0<<shuruminute;
    }
    else{
        cout<<shuruminute;
    }
    //cout<<shuru<<":"<<shuruminute<<endl;;
}
