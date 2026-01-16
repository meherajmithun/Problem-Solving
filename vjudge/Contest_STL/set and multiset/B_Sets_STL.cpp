#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int query; cin >> query;
    set<int>st;
    while(query--){
        int a; cin >> a;
        if(a == 1){
            int x; cin >> x;
            st.insert(x);
        }
        else if(a == 2){
            int x; cin >> x;
            auto it = st.find(x);
            if(it != st.end()){
                st.erase(x);
            }
        }
        else{
            int x; cin >> x;
            if(st.find(x) != st.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

}