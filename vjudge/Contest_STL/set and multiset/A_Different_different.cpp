#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();
    int n; cin >> n;
    set<ll>st;
    for(int i=0; i<n; i++){
        ll a; cin >> a ;
        st.insert(a);
    }
    cout<<st.size()<<endl;
}