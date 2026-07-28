#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        //int n; cin >> n;
        string s; cin >> s;
        if(s[0] != s[s.size()-1]){
            s[0] = s[s.size()-1];
        }
        cout<<s<<endl;
    }
}