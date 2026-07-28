#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    vector<int>v(n);
    map<string,int>mp;
    int t=0;
    int ans = 0;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int a; cin >> a;
        v[i] += a;
        mp[s]++;
        if(mp[s] == 2 and t < k){
            ans += v[i];
            t++;
        }
    }
    cout<<ans<<endl;
}