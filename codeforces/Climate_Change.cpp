#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int sum = 0;
    for(auto a : v) sum += a;
    int cnt = 0;
    int pre=0;

    for(int i=0; i<n-1; i++){
        pre += v[i];
        if(pre==sum - pre) cnt++;
    }
    cout<<cnt;

}