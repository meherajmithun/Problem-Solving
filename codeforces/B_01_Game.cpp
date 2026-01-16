#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        int n = (int)s.size();
        int a=0,b=0;
        for(int i=0; i<n; i++){
            if(s[i] == '0') a++;
            else b++;
        }
        int mn = min(a,b);
        if(mn%2 == 0) cout<<"NET"<<'\n';
        else cout<<"DA"<<'\n';
    }
}