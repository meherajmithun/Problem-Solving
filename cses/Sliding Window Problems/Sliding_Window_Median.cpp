//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007
multiset<int>ms1,ms2;
 
void balance(){
    int sz = ms1.size()+ms2.size();
    int sz1 = (sz+1)/2;
    int sz2 = sz-sz1;
    while(ms1.size()>sz1){
        int val = *ms1.rbegin();
        ms2.insert(val);
        ms1.erase(ms1.find(val));
    }
    while(ms2.size()>sz2){
        int val = *ms2.begin();
        ms1.insert(val);
        ms2.erase(ms2.find(val));
    }
}
 
void add(int n){
    if(ms1.empty()){
        ms1.insert(n);
    }
    else{
        int val = *(ms1.rbegin());
        if(val<n){
            ms2.insert(n);
        }
        else{
            ms1.insert(n);
        }
    }
    balance();
}
 
void remove(int n){
    if(ms1.find(n) != ms1.end()){
        ms1.erase(ms1.find(n));
    }
    else{
        ms2.erase(ms2.find(n));
    }
    balance();
}
 
void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
 
    for(int i=0; i<k; i++){
        add(v[i]);
    }
    cout<<*ms1.rbegin()<<" ";
    for(int i=k; i<n; i++){
        remove(v[i-k]);
        
        add(v[i]);
        cout<<*ms1.rbegin()<<" ";
        
        // else break;
    }
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}