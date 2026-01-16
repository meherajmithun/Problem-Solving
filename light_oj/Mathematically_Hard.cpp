#include<bits/stdc++.h>
using namespace std;
const int N = 5000005;
#define int unsigned long long
int phi[N+12];

void totient(){
    for(int i=1; i<N; i++) phi[i]=i;

    for(int i=2; i<N; i++){
        if(phi[i]==i){
            for(int j=i; j<N; j+=i){
                phi[j] -= (phi[j]/i);
            }
        }
    }
    // for(int i=1; i<21; i++) cout<<i<<" "<<phi[i]<<"\n";
    for(int i=1; i<N;i++){
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    totient();
    int tc; cin>>tc;
    int c=1;
    while(tc--){
        int a,b; cin>>a>>b;
        // for(int i=a; i<=b; i++) cout<<pre[i]<<" "; cout<<'\n';
        cout<<"Case "<<c++<<": ";
        if(a==1 and b==1){
            cout<<0<<'\n'; continue;
        }
        cout<<phi[b]-phi[a-1]<<'\n';
    }
}