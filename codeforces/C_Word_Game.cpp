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

void solve() {
   int n ; cin >> n;
   vector<string>s1(n);
   vector<string>s2(n);
   vector<string>s3(n);
   map<string,int>cnt;

   for(int i = 0; i < n; i++){
    cin >> s1[i];
    cnt[s1[i]]++;
   }
   for(int i = 0; i < n; i++){
    cin >> s2[i];
    cnt[s2[i]]++;
   }
   for(int i = 0; i < n; i++){
    cin >> s3[i];
    cnt[s3[i]]++;
   }
   int a = 0, b = 0 , c = 0;
   for(int i = 0; i < n; i++){
    if(cnt[s1[i]] == 1) a += 3;
    else if(cnt[s1[i]] == 2) a += 1;
   }

   for(int i = 0; i < n; i++){
    if(cnt[s2[i]] == 1) b += 3;
    else if(cnt[s2[i]] == 2) b += 1;
   }
   for(int i = 0; i < n; i++){
    if(cnt[s3[i]] == 1) c += 3;
    else if(cnt[s3[i]] == 2) c += 1;
   }

   cout<<a<<" "<<b<<" "<<c<<endl;
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}