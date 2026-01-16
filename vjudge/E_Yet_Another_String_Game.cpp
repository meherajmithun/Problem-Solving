#include<bits/stdc++.h>
using namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
    string s; cin >> s;
    for(int i=0; i<(int)s.size(); i++){
        if(i % 2 == 0){
            if(s[i] != 'a'){
                s[i] = 'a';
            }
            else{
                s[i]++;;
            }
        }
        else{
            if(s[i] == 'z'){
                s[i]--;
            }
            else{
                s[i] = 'z';
            }
        }
    }
    cout<<s<<endl;
}
int main(){
	optimize();
    int tc = 1; cin >> tc;
    while(tc--){
        solve();
    }
}