#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    int n; cin >> n;
    map<string,int>mp;
    while(n--){
        string s; cin >> s;
        mp[s]++;
        if(mp[s] == 1){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]-1<<endl;
        }
    }
    
}