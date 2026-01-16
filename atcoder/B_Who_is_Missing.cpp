#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n,m ; cin >> n >> m;
    set<int>st;
    for(int i =0; i<n; i++){
        st.insert(i+1);
    }
    for(int i=0; i<m; i++){
        int a; cin >> a;
        st.erase(a);
    }
    cout<<st.size()<<endl;
    for(auto u : st) cout<<u<<" ";

}