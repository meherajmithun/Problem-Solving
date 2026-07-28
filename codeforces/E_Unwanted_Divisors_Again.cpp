#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 30000005;
vector<int>divisor(N, 0);

void pre(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i) divisor[j]++;
    }
}

int32_t main(){
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    
}