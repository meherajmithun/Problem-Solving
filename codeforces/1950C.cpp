/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s[1]-48 == 2 && s[0]-48 == 1) {
        cout << s << " PM"<<endl;
    }
    else if(s[1]-48 > 2 && s[0]-48 == 1){
        int x = s[0] - 48;
        int y = s[1] - 48;
        int z = x * 10 + y;
        int ans = z - 12;
        if(ans <= 9){
            cout << 0<<ans << s[2] << s[3] << s[4] <<" PM"<<endl;
        }
        else {
            cout <<ans << s[2] << s[3] << s[4] <<" PM"<<endl;
        }
    }
    else if(s[0]-48 == 2){
        int x = s[0] - 48;
        int y = s[1] - 48;
        int z = x * 10 + y;
        int ans = z - 12;
        if(ans <= 9){
            cout << 0<<ans << s[2] << s[3] << s[4] <<" PM"<<endl;
        }
        else {
            cout <<ans << s[2] << s[3] << s[4] <<" PM"<<endl;
        }
    }
    else if(s[0] - 48 == 0 && s[1] - 48 == 0){
        cout << 12 <<s[2]<<s[3]<<s[4]<<" AM"<<endl;
    }
    else cout << s<<" AM"<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}
