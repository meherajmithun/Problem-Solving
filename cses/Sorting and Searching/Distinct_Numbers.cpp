#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n ; cin >> n;
    vector<int>v(n);
 
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int x = unique(v.begin() , v.end())-v.begin();
    cout<<x<<endl;
}