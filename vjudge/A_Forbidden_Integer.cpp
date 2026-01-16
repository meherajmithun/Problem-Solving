//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,k,x; cin>>n>>k>>x;
    if(x != 1){
        cout<<"YES"<<endl<<n<<endl;
        for(int i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }   
    if(k == 1){
        cout<<"NO"<<endl;
        return;
    }

    if(k == 2 and n%2 != 0){
        cout<<"NO"<<endl;
        return;
    }

    if(n%2 == 0){
        int two = (n/2);
        cout<<"YES"<<endl<<two<<endl;
        for(int i=0; i<two; i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(n >=3 ){
        int t = n/2-1;
       /// t--;
        cout<<"YES"<<endl<<n/2<<endl;
        for(int i=0; i<t; i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}