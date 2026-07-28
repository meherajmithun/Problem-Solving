#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<char>st;
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    if(st.size() == 0) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}