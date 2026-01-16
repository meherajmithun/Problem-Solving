#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n,k; cin >> n >> k;
    map<int,int>mp;
    vector<int>v(n);
    for(int i =0; i<n; i++){
        cin >> v[i];
        mp[v[i]] = i+1;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        int tmp = abs(k-v[i]);
        if(mp.count(tmp) and mp[tmp] != i+1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}