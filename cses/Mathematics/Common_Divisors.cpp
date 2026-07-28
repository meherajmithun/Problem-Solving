#include<bits/stdc++.h>
using namespace std;
const int N = 1000006;

int main(){

    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>cnt(N);
    for(auto a : v) cnt[a]++;
    for(int i=N; i>0; i--){
        int ans = 0;
        for(int j=i; j<N; j+=i){
            ans += cnt[j];
        }
        if(ans>1){
            cout<<i;
            return 0;
        }
    }

}