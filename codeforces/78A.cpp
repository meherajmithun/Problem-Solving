/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

bool isvowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main(){
    int cnt[3] = { 5 , 7 , 5};
    vector<string>v;
    string s;
    for(int i = 0; i < 3; i++){
        char c;
        cin >> c;
        getline(cin , s);
        
        s = c + s;
        
        v.push_back( s );
    }
    for(int i = 0; i < 3; i++){
        
        int c = 0;
        
        for(auto u : v[i]){
            if( isvowel(u) ) c++;
        }
        
        if(c != cnt[i]){
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}