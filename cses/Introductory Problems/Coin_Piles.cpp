#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int tc; cin>>tc;
    while(tc--){
        ll a,b; cin>>a>>b;
        ll x = (a+b);
        if(x % 3 == 0 and 2*min(a,b) >= max(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}