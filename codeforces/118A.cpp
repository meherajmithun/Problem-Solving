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
    return (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'y');
}
int main(){
    string s,ans;
    cin >> s;
    for(auto u : s){
        char c = tolower( u ) ;

        if( isvowel( c ) == 0 ){
            ans += '.';
            ans += c;
        }
    }
    cout<< ans<<endl;
}