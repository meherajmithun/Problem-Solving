#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    string s;
    getline(cin,s);
    transform(s.begin() , s.end(),s.begin(),::tolower);
    sort(s.begin() , s.end());
    int sz = unique(s.begin() , s.end())-s.begin();
    if(sz == 27) cout<<"pangram"<<endl;
    else cout<<"not pangram"<<endl;
}
int main(){
    fast();
    int tc = 1; ///cin >> tc;
    while(tc--){
        solve();
    }
}