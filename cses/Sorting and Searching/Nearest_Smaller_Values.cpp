#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &u : v) cin>>u;
    stack<ll>st;
 
    for(int i=0; i<n; i++){
        while(!st.empty() and v[st.top()]>=v[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<"0 ";
        }
        else{
            cout<<st.top()+1<<" ";
        }
        st.push(i);
    }
}