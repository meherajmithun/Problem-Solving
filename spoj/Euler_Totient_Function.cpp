#include<bits/stdc++.h>
using namespace std;
const int N = 10000005;
vector<int>phi(N);

void pre(){
    for(int i=1; i<N; i++) phi[i]=i;
    for(int i=2; i<N; i++){
        if(phi[i]==i){
            for(int j=i; j<N; j+=i){
                phi[j] -= phi[j]/i;
            }
        }
    }
}


int main(){
    pre();
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        cout<<phi[n]<<'\n';
    }
}