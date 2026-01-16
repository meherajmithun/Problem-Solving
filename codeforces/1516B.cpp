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

void solve(){

    int n;
    cin>>n;
    int ar[n+3];
    for(int i=1;i<=n;i++)cin>>ar[i];
    int pre[n+3];
    pre[0]=0;
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]^ar[i];

    int ans=0;

    for(int i=1;i<n;i++){

        int a=pre[i];
        int b=pre[n]^pre[i];
        if(a==b){
            ans=1;
            break;
        }
    }

    for(int i=1;i<n-1;i++){
        int a=pre[i];
        for(int j=i+1;j<n;j++){

            int b=pre[j]^pre[i];
            int c=pre[n]^pre[j];
            if(a==b && b==c){
                ans=1;
                break;
            }
        }
    }

    if(ans==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
