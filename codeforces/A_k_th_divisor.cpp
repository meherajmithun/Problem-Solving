#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>divisor;
const ll mx = 1e7+123;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,k; cin>>n>>k;
    ll cnt = 0;
    for(ll i=1; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }

    sort(divisor.begin() , divisor.end());

    if(divisor.size()<k){
        cout<<-1<<endl;
        return 0;
    }
    ll tmp = divisor[k-1];
    cout<<tmp;
}