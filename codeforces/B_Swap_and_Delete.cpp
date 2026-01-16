#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
#define print(x) cout << x << endl

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    string s; cin >> s;
    int n = (int) s.size();
    int on = 0 , off = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '0') off++;
        else on++;
    }
    for(int i=0; i<n; i++){
        if(s[i] == '0' and on > 0) on--;
        else if(s[i] == '1' and off > 0) off--;
        else {
            print(on+off);
            return ;
        }
    }
    print(0);
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}