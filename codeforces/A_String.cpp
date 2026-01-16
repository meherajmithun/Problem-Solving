#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    while(testcase--){
        string s; cin >> s;
        int cnt = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '1') cnt++;
        }
        cout<<cnt<<'\n';
    }
}