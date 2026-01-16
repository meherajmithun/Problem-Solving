#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , a , b;
    cin >> n >> a >> b;
    string s ; cin >> s;
    pair<int,int>initial = {0,0};
    for(int i = 0; i < 500; i++){
        if(s[i%n] == 'N') initial.second++;
        else if(s[i%n] == 'E') initial.first++;
        else if(s[i%n] == 'S') initial.second--;
        else initial.first--;
        if(initial.first == a and initial.second == b){
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int tc ; cin >> tc;
    while(tc--){
        solve();
    }
}