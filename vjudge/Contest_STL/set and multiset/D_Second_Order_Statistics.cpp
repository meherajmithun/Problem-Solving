#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    set<int>st;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        st.insert(a);
    }
    if(st.size() < 2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<*++st.begin()<<endl;
}