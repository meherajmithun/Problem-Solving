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

void solve() 
{

        ll n;
        cin>>n;
        ll ar[n+3];
        for(int i=1;i<=n;i++)cin>>ar[i];
        ll ans=ar[1]-1;
        ll ind=ans;
        for(int i=2;i<=n;i++)
        {
            if(ind+i<ar[i])
            {
                ll x =ar[i]-(ind+i);
                ind+=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
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