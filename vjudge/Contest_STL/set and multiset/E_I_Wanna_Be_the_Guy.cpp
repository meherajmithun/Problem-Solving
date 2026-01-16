#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    int p; cin >> p;
    set<int>st;
    for(int i=0; i<p; i++){
        int a; cin >> a;
        st.insert(a);
    }
    int q; cin >>  q;
    for(int i=0; i<q; i++){
        int a; cin >> a;
        st.insert(a);
    }
    if(st.size() == n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}